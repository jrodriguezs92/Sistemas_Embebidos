###
#	Makefile to test mymath library.
#   src Makefile
#	
#	Instituto Tecnológico de Costa Rica
#	Computer Engineering
#	CE5303: Embedded Systems Introduction
#	
#	Author: Jeremy Rodriguez Solorzano
#	Date: 14/08/2019
###

APP=calculadora
APPEST=calculadora_e
APPDIN=calculadora_d
CC=gcc
LIBS=../lib
INCLUDE=../include
LINKERFLAGS=-lmymath
LM=-lm
OUT=../bin
OPTNS=-Wall
BDIN=-Bdynamic
LIBPATH=/home/jerodso/program/lib

all:$(APPEST) $(APPDIN)

$(APPEST):$(APP).c
		$(CC) $(OPTNS) -L$(LIBS) -I$(INCLUDE) -o $(OUT)/$(APPEST) $(APP).c $(LIBS)/libmymath.a $(LM)

$(APPDIN):$(APP).c
		$(CC) -o $(OUT)/$(APPDIN) $(APP).c -I$(INCLUDE) -L$(LIBS) $(BDIN) $(LIBS)/libmymath.so $(LM)
		export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$(LIBPATH)

clean:
		rm -f  $(OUT)/$(APP)*
		rm -f *.o 
		rm -f *.so
		rm -f *.a

.PHONY:clean