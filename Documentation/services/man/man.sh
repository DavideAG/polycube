#!/bin/bash
shopt -s -o nounset

count=0
filenames=$(ls | grep -I "pcn-*")
W=()

for filename in $filenames
do
	W+=($count "$filename")	
	let "count++"
done

OPTION=$(whiptail --title "Welcome to Polycube documentation" --menu "Choose a service" 16 78 10 "${W[@]}" 3>&1 1>&2 2>&3)

exitstatus=$?
if [ $exitstatus = 0 ]; then
	count=0
	for dir in ${filenames[@]}
	do
		if [ $count = $OPTION ]; then
			whiptail --textbox --scrolltext ${dir}/${dir:4}.rst 38 100
			break
		else
			let "count++"
		fi
	done
fi
