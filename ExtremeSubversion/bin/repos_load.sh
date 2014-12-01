#!/bin/sh
# (C) dragon, www.bdmod.com

export LD_LIBRARY_PATH=../lib

# $1--存储库名称
path="/tmp/ExtremeSubversion/""$1"

# 读取存储库配置
if [ -d "$path" ]; then
	tmp=$(cat ${path}/conf/svnserve.conf | grep "anon-access")
	echo $tmp
fi
