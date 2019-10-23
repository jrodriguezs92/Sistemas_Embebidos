###
#	Makefile to test mymath library.
#   lib Makefile
#	
#	Instituto Tecnológico de Costa Rica
#	Computer Engineering
#	CE5303: Embedded Systems Introduction
#	
#	Author: Jeremy Rodriguez Solorzano
#	Date: 14/08/2019
###

APP=mymath
CC=gcc
INCLUDE=../include
AR=ar
OPTNS=-Wall
FPIC=-fPIC
RANLIB=ranlib
LD=ld
SHARED=-shared

all:lib$(APP).a lib$(APP).so

lib$(APP).a:$(APP).c
		$(CC) $(OPTNS) -c $(APP).c -I$(INCLUDE)
		$(AR) rv lib$(APP).a $(APP).o
		$(RANLIB) lib$(APP).a

lib$(APP).so:$(APP).c
		$(CC) $(OPTNS) $(FPIC) -c $(APP).c -I$(INCLUDE)
		$(LD) -o lib$(APP).so $(APP).o $(SHARED)

clean:
		rm -f *.o 
		rm -f *.a
		rm -f *.so
		
.PHONY:clean