IF NOT EXIST ..\config.bat GOTO noconfig
call ..\config.bat

IF NOT "%OPENSSL_DIR%"=="" call :openssl
IF ERRORLEVEL 1 GOTO ERROR

set PARAMS=-t dsp --with-berkeley-db=%BDB_DIR% --with-libintl=%INTL_DIR% --with-zlib=%ZLIB_DIR% --with-httpd=%HTTPD_SRC_DIR% --with-neon=%NEON_DIR% --enable-bdb-in-apr-util
IF NOT "%OPENSSL_DIR%"=="" set PARAMS=%PARAMS% --with-openssl=%OPENSSL_DIR%

python gen-make.py %PARAMS%
IF ERRORLEVEL 1 GOTO ERROR

MSDEV.COM %HTTPD_SRC_DIR%\apache.dsw /MAKE "BuildBin - Win32 Release"
IF ERRORLEVEL 1 GOTO ERROR

MSDEV.COM subversion_msvc.dsw /USEENV /MAKE "__ALL_TESTS__ - Win32 Release"
IF ERRORLEVEL 1 GOTO ERROR


EXIT 0

REM ----------------------------------------------------
:ERROR
ECHO.
ECHO *** Whoops, something choked.
ECHO.
CD ..
EXIT 1


:openssl
rem ====== Build openssl.
pushd %OPENSSL_DIR%
perl Configure VC-WIN32
IF ERRORLEVEL 1 goto openssl-err1

call ms\do_ms
IF ERRORLEVEL 1 goto openssl-err1

nmake -f ms\ntdll.mak /NOLOGO /S
IF ERRORLEVEL 1 goto openssl-err1

pushd out32dll
call ..\ms\test
IF ERRORLEVEL 1 goto openssl-err2

popd
popd
EXIT /B 0

:openssl-err2
popd

:openssl-err1
popd
EXIT 1

:noconfig
echo File config.bat not found. Please copy it from config.bat.tmpl and tweak for you.
EXIT 2