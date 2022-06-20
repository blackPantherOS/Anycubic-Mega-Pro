#!/bin/sh

# CAUTION ! USE ONLY TO OWN RISK!!! NO ANY WARRANTY...
# TESTED ON ANYCUBIC MEGA PRO
# Written by Charles K Barcza - blackPanther Europe (kbarcza@blackpanther.hu)

# Anycubic MEGA Pro Gcode modify for LightBurn or other Laser cutter software

if [ ! -f "$1" ];then
echo "Please enter filename with full path!"
exit
fi

echo "Modify: adding G4/G6 on $1 "
sed -i -e "/M106/i G4 P0" -e "s/M106/G6/" $1

echo "Finished!"
