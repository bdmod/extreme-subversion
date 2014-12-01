#!/bin/sh
# (C) dragon, www.bdmod.com

export LD_LIBRARY_PATH=../lib

# $1--存储库名称
reposname=`echo "$1" | sed 's/ //g'`
path="/tmp/ExtremeSubversion/"${reposname}

# $2--匿名权限
anonaccess="$2"

# 存储库不能重复
for i in `ls /tmp/ExtremeSubversion/ -l | awk '/^d/{print $9}'`; do
	if [ "${i}" == "${reposname}" ]; then
		exit 1
	fi
done

# 从网页调用此脚本，当前路径是/www
cd /opt/app/ExtremeSubversion/bin/

# 建立存储库，增加默认用户admin
if [ ! -d "$path" ]; then
	mkdir -p ${path}
	./svnadmin create --fs-type fsfs ${path}
	echo "[/]" > ${path}/conf/authz
	echo "admin=rw" >> ${path}/conf/authz
	echo "[users]" > ${path}/conf/passwd
	echo "admin=123456" >> ${path}/conf/passwd
	echo "[general]" > ${path}/conf/svnserve.conf
	echo "anon-access = ${anonaccess}" >> ${path}/conf/svnserve.conf
	echo "auth-access = write" >> ${path}/conf/svnserve.conf
	echo "password-db = passwd" >> ${path}/conf/svnserve.conf
	echo "authz-db = authz" >> ${path}/conf/svnserve.conf
	echo "realm = ${path}" >> ${path}/conf/svnserve.conf
fi

echo "ok"
