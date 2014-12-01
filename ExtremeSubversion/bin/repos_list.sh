#!/bin/sh
# (C) dragon, www.bdmod.com

export LD_LIBRARY_PATH=../lib
cd /opt/app/ExtremeSubversion/bin/

rootpath="/tmp/ExtremeSubversion"

if [ ! -h /tmp/ExtremeSubversion ];then
	usbPath=$(cat /tmp/usbdir |cut -d ' ' -f2)
	mkdir -p ${usbPath}/ExtremeSubversion
	ln -s ${usbPath}/ExtremeSubversion /tmp/ExtremeSubversion
fi

tmp=''
for i in `ls ${rootpath}/ -l | awk '/^d/{print $9}'`; do
  rev=$(./svnlook youngest ${rootpath}/${i})
  lastdate=$(./svnlook date ${rootpath}/${i} | cut -d ' ' -f1,2 | sed 's/ /@/g')
  tmp=${tmp}' '${i}'|'${rev}'|'${lastdate}
done
echo $tmp | sed 's/ /,/g'