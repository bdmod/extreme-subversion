#!/bin/sh
# (C) dragon, www.bdmod.com

export LD_LIBRARY_PATH=../lib

# $1--存储库名称
path="/tmp/ExtremeSubversion/""$1"

# 删除存储库
if [ -d "$path" ]; then
	rm -rf ${path}
fi

echo "ok"
