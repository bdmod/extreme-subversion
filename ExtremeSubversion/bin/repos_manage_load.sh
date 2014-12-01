#!/bin/sh
# (C) dragon, www.bdmod.com

export LD_LIBRARY_PATH=../lib

# $1--存储库名称
reposname=`echo "$1" | sed 's/ //g'`
path="/tmp/ExtremeSubversion/"${reposname}

# 从网页调用此脚本，当前路径是/www
cd /opt/app/ExtremeSubversion/bin/

# 读取存储库状态
size=$(du -sh $path | cut -d '/' -f1)
author=$(./svnlook author $path)
rev=$(./svnlook youngest $path)
lastdate=$(./svnlook date $path | cut -d ' ' -f1,2,3)

tmp=${size}'|'${author}'|'${rev}'|'${lastdate}
echo $tmp
