#!/bin/sh
# (C) dragon, www.bdmod.com

export LD_LIBRARY_PATH=../lib

# $1--存储库名称
reposname=`echo "$1" | sed 's/ //g'`
path="/tmp/ExtremeSubversion/"${reposname}

# 从网页调用此脚本，当前路径是/www
cd /opt/app/ExtremeSubversion/bin/

# 打包版本库
timestamp=`date "+%Y%m%d%H%M%S"`
usbPath=$(cat /tmp/usbdir |cut -d ' ' -f2)
./svnadmin dump $path | gzip > ${usbPath}/${reposname}_${timestamp}.gz

# 准备下载链接
rm -f /www/Extreme_Subversion_dump_*.gz
ln -s ${usbPath}/${reposname}_${timestamp}.gz /www/Extreme_Subversion_dump_${reposname}_${timestamp}.gz

LastValue=$?
if [ ${LastValue} -eq 0 ];then
	echo "ok|Extreme_Subversion_dump_${reposname}_${timestamp}.gz"
else
	exit 1
fi
