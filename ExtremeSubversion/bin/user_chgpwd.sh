#!/bin/sh
# (C) dragon, www.bdmod.com

# $1--存储库名称
path="/tmp/ExtremeSubversion/""$1"

# $2--用户名
username="$2"

# $3--密码
password="$3"

# 修改用户密码
if [ -d "$path" ]; then
	sed -i "s/${username}.*$/${username}=${password}/" ${path}/conf/passwd
fi

echo "ok"
