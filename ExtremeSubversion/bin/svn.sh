#!/bin/sh /etc/rc.common
# (C) dragon, www.bdmod.com

START=50

export LD_LIBRARY_PATH=../lib

start_instance () {
	local section="$1"
	config_get port "$section" 'port'
	path="/tmp/ExtremeSubversion/"

	service_start ./svnserve -d --listen-port ${port} -r ${path}
}

start() {
	usbPath=$(cat /tmp/usbdir |cut -d ' ' -f2)
	mkdir -p ${usbPath}/ExtremeSubversion
	rm -f /tmp/ExtremeSubversion
	ln -s ${usbPath}/ExtremeSubversion /tmp/ExtremeSubversion

	config_load 'extremeSubversion'
	config_foreach start_instance svnserver
}

stop() {
	SERVICE_SIG_STOP="INT" \
	service_stop ./svnserve
}
