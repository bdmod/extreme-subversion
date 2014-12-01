#!/bin/sh
# (C) dragon, www.bdmod.com

# $1--存储库名称
path="/tmp/ExtremeSubversion/""$1"

# $2--用户名
username=`echo "$2" | sed 's/ //g'`

# $3--密码
password="$3"

# 增加用户
if [ -d "$path" ]; then
	search_Tmp=`cat ${path}/conf/authz | grep ${username}=`
	for i in ${search_Tmp}; do
		name_tmp=`echo $i | cut -d '=' -f1`
		if [ "${name_tmp}" == "${username}" ]; then
			exit 1
		fi
	done

	search_Tmp=`cat ${path}/conf/passwd | grep ${username}=`
	for i in ${search_Tmp}; do
		name_tmp=`echo $i | cut -d '=' -f1`
		if [ "${name_tmp}" == "${username}" ]; then
			exit 1
		fi
	done

	echo "${username}=rw" >> ${path}/conf/authz
	echo "${username}=${password}" >> ${path}/conf/passwd
fi

echo "ok"
