#!/bin/sh

# CAUTION ! USE ONLY TO OWN RISK!!! NO ANY WARRANTY...
# TESTED ON ANYCUBIC MEGA PRO
# Written by Charles K Barcza - blackPanther Europe (kbarcza@blackpanther.hu)

# Anycubic MEGA Pro compatible BMP generator

if [ ! -f "$1" ];then
echo "Please enter filename with full path!"
exit
fi

if [ ! -n "$(which convert 2>/dev/null) " ];then
echo "Please install ImageMagick first!"
exit
fi

echo
echo -n "Converting: $(readlink -f $1) to $PWD/$(echo $1 | sed 's|\.[a-z].*|.bmp|')"
convert $1 "BMP3:$(echo $1 | sed 's|\.[a-z].*|.bmp|')"
echo " Finished!"
echo 
