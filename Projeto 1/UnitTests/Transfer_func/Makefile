# Makefile for creating and running unit tests, using CppUTest
#
# The modules to be tested are located in $(PROG_LOCATION).

# - Location of main program files
PROG_LOCATION=./
MODULE_NAME=transfer
MOCK_LOCATION=../../XC32_mock

# Adapt the following lines to your own environment:
CPPUTEST_HOME =/mnt/d/Documentos/Eletrónica/cpputest

# Define the target device. Possible DEVICE values can be obtained from xc.h.
DEVICE=32MX795F512L

# XC32 version and location in file system
# XC32_VER=v2.15

# Get the base directory for XC32 installation according to environment
UNAME := $(shell uname)

ifeq ($(UNAME), Linux)
XC32_BASE = /mnt/d/Programas/Microchip
endif

ifeq ($(UNAME),CYGWIN_NT-6.1)
PIC32_BASE = /cygdrive/c/Program\ Files\ \(x86\)/Microchip
endif

# XC32_HOME=$(XC32_BASE)/xc32/$(XC32_VER)


# CFLAGS += -D__${DEVICE}__ -D__LANGUAGE_C__ -D_STDLIB_H_ -D__SYS_L1CACHE_H -I${XC32_HOME}/pic32mx/include/
CFLAGS += -D__${DEVICE}__ -D__LANGUAGE_C__ -D_STDLIB_H_ -D__SYS_L1CACHE_H -D_UNITTESTING_
CPPFLAGS += -I$(PROG_LOCATION) -I$(MOCK_LOCATION)
CXXFLAGS += -I$(CPPUTEST_HOME)/include

CXX = g++
# CC = gcc

CPPUTEST_LIBS = ${CPPUTEST_HOME}/lib

.PHONY: run clean cleanall

# The following rule creates the test executable file.
tests: mainTester.o testRunner.o $(MOCK_LOCATION)/mem_map.o $(PROG_LOCATION)/$(MODULE_NAME).o
	$(CXX) $(CXXFLAGS) -I$(PROG_LOCATION) -I$(MOCK_LOCATION) $(LD_LIBRARIES) -L$(CPPUTEST_LIBS) $^ -lCppUTest -o tests

run: tests
	- ./tests

clean:
	rm -f *.o
	rm -f $(PROG_LOCATION)/*.o
	rm -f $(MOCK_LOCATION)/*.o

cleanall: clean
	rm -f tests
