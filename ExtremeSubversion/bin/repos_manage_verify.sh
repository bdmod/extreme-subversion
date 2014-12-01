#!/bin/sh
# (C) dragon, www.bdmod.com

export LD_LIBRARY_PATH=../lib

# $1--存储库名称
reposname=`echo "$1" | sed 's/ //g'`
path="/tmp/ExtremeSubversion/"${reposname}

# 从网页调用此脚本，当前路径是/www
cd /opt/app/ExtremeSubversion/bin/

# 验证版本库保存的数据
./svnadmin verify $path

LastValue=$?
if [ ${LastValue} -eq 0 ];then
	echo "ok"
else
	exit 1
fi
