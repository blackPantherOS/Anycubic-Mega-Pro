#!/bin/sh

# CAUTION ! USE ONLY TO OWN RISK!!! NO ANY WARRANTY...
# TESTED ON ANYCUBIC MEGA PRO
# Written by Charles K Barcza - blackPanther Europe (kbarcza@blackpanther.hu)

# custom path to your avrdude,conf
CONF=""

echo
echo "This script written by Charles K Barcza (blackpanther.hu) for Anycubic Mega Pro..."
echo
echo "Check paths on your system: "
avr=$(which avrdude 2>/dev/null|| echo "Missing")
if [ "$avr" != "Missing" ];then
echo " * avrdude: $avr "
else
echo "avrdude not installed, please install first..."
exit
fi

if [ -f /etc/avrdude/avrdude.conf ];then 
echo " * config: /etc/avrdude/avrdude.conf"
CONF="/etc/avrdude/avrdude.conf"
elif [ -f /etc/avrdude.conf ];then 
echo " * config: /etc/avrdude.conf"
CONF="/etc/avrdude.conf"
elif [ -f "$CONF" ];then
echo " * custom config: $CONF"
CONF="$CONF"
else
echo "Config file mnissing? Please set CONF variable first in this script..."
exit
fi
echo "Avrdude and Conf seems OK.."
echo '=========================================================================================================================='
echo "| EXAMPLE: THE GOOD OUTPUT after run command!"
echo "|"
echo "| avrdude -C $CONF -p m2560 -c stk500v2 -P /dev/ttyUSB0 -b 115200 -U flash:r:flash_backup_file.hex:i
| 
| avrdude: AVR device initialized and ready to accept instructions
| 
| Reading | ################################################## | 100% 0.01s
| 
| avrdude: Device signature = 0x1e9801 (probably m2560)
| avrdude: reading flash memory:
| 
| Reading | ################################################## | 100% 27.89s
| 
| avrdude: writing output file 'flash_backup_file.hex'
| 
| avrdude: safemode: Fuses OK (E:FD, H:D8, L:FF)
| 
| avrdude done.  Thank you
=========================================================================================================================="
echo
echo "Now sleep 5sec, Ctrl+C to stop script...(USE ONLY WITH OWN RISK!!!)"
sleep 5
echo "Starting..."
sleep 1
echo "Download firmware from flash memory as HEX file (flash_backup_file.hex):"
sleep 1
avrdude -C $CONF -p m2560 -c stk500v2 -P /dev/ttyUSB0 -b 115200 -U flash:r:flash_backup_file.hex:i
echo "Download firmware from flash memory to Raw format file (flash_backup_file.taw):"
sleep 1
avrdude -C $CONF -p m2560 -c stk500v2 -P /dev/ttyUSB0 -b 115200 -U flash:r:flash_backup_file.raw:r
echo "Download Eeprom content from memory as HEX file (eeproim_backup_file.hex):"
sleep 1
avrdude -C $CONF -p m2560 -c stk500v2 -P /dev/ttyUSB0 -b 115200 -U eeprom:r:eeprom_backup_file.hex:i
echo "Download Eeprom content from memory to Raw file (eeproim_backup_file.raw):"
sleep 1
avrdude -C $CONF -p m2560 -c stk500v2 -P /dev/ttyUSB0 -b 115200 -U eeprom:r:eeprom_backup_file.raw:r

echo "Backup process has finished..."
echo 
echo "==== Notice! ===="
echo 
echo "The example commands to write back this files to flash memory :"
echo "avrdude -C $CONF -p m2560 -c stk500v2 -P /dev/ttyUSB0 -b 115200 -U flash:w:flash_backup_file.hex"
echo "avrdude -C $CONF -p m2560 -c stk500v2 -P /dev/ttyUSB0 -b 115200 -U eeprom:w:eeprom_backup_file.raw"
echo 
