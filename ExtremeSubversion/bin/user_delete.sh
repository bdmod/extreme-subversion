#!/bin/sh
# (C) dragon, www.bdmod.com

# $1--存储库名称
path="/tmp/ExtremeSubversion/""$1"

# $2--用户名
username="$2"

# 删除用户
if [ -d "$path" ]; then
	sed -i "/${username}/d" ${path}/conf/authz
	sed -i "/${username}/d" ${path}/conf/passwd
fi

echo "ok"
