#!/bin/bash

# =========== setting here ===============

user="denna"
password="BRtSDdCn"
host="127.0.0.1"
database="plainspbar"

# =========== stop setting ===============

selesai () {
	notify-send -t 200 -i /usr/share/icons/gnome/48x48/status/appointment-soon.png  -u critical "Udah selesai tuh" "Eh perintahnya udah selesai tuh"
}

if [[ -z $1 ]] && [[ -z $2 ]]
then
	echo "usage dumpdb.sh <port> <dbfile.sql>"
else
	port=$1
	dbfile=$2
fi
mysql -u $user -p$password -P $port -h $host $database < $dbfile
selesai;
