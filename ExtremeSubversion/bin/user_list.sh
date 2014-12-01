#!/bin/sh
# (C) dragon, www.bdmod.com

export LD_LIBRARY_PATH=../lib

# $1--存储库名称
path="/tmp/ExtremeSubversion/""$1"

tmp=`cat ${path}/conf/passwd | grep "=" |sed 's/ /,/g'`
echo $tmp | sed 's/ /,/g'
