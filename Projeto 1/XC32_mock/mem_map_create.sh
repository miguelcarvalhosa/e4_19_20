#!/bin/bash

# Script to generate a file, called mem_map.c, containing the necessary
# declarations to create variables  in memory mapping the PIC microcontroller
# registers. These variables allow unit tests to be performed in a PC.
#
# The script is prepared to run under Linux or Cygwin. 
#
# pf@ua.pt

# Define the target device. Possible DEVICE values can be obtained from xc.h.
DEVICE=32MX795F512L

# XC32 version and location in file system
# Set according to installed XC32 version
# See PIC32_HOME variable for the possible location of XC32
XC32_VERSION=1.42


# You should not need to change below this line.

UNAME=$(uname)

# Get the xc32 installation base directory:
if [[ $UNAME == "Linux" ]]; then
	XC32_BASE="/opt/microchip"
fi

# Warning: script adapted to Cygwin. Not tested! May require tweaking...
if [[ UNAME == "CYGWIN_NT-6.1" ]]; then
	XC32_BASE="/cygdrive/c/Program\ Files\ \(x86\)/Microchip"
fi


XC32_HOME=$XC32_BASE/xc32/v$XC32_VERSION


# Output file name 
OUT_FILE=mem_map

# Use xc.h to access the device data structure and create the c file for the mock.
# Remove mention to extern variables to create the compilable .c file.
# -D_STDLIB_H_ and -D__SYS_L1CACHE_H avoid including stdlib.h and sys/l1cache.h
gcc -w -E -P -D__${DEVICE}__ -D__LANGUAGE_C__ -D_STDLIB_H_ -D__SYS_L1CACHE_H\
	-I${XC32_HOME}/pic32mx/include/ \
	$XC32_HOME/pic32mx/include/xc.h \
	| sed -e 's/ __attribute__((section("sfrs")))//' \
	| sed -e 's/extern //' > $OUT_FILE.c 


# Create the header file
gcc -w -E -P -D__${DEVICE}__ -D__LANGUAGE_C__ -D_STDLIB_H_ -D__SYS_L1CACHE_H\
	-I${XC32_HOME}/pic32mx/include/ \
	$XC32_HOME/pic32mx/include/xc.h \
	| sed -e 's/ __attribute__((section("sfrs")))//' > $OUT_FILE.h

# Announce the result...
echo $OUT_FILE.c and $OUT_FILE.h created!
ls -l $OUT_FILE.[ch]