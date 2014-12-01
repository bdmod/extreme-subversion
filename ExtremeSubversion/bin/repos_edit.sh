#!/bin/sh
# (C) dragon, www.bdmod.com

export LD_LIBRARY_PATH=../lib

# $1--存储库名称
path="/tmp/ExtremeSubversion/""$1"

# $2--匿名权限 (none / read / write)
acc="$2"

# 修改存储库配置
if [ -d "$path" ]; then
	sed -i "s/anon-access.*$/anon-access=${acc}/" ${path}/conf/svnserve.conf
fi

echo "ok"
