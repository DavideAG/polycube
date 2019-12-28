#!/bin/bash
shopt -s -o nounset

count=1

filenames=$(ls | grep -I "pcn-*")

for filename in $filenames
do
	echo $filename
done
