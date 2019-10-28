###
#	Makefile to test the counter system C program.
#   src Makefile
#	
#	Instituto Tecnológico de Costa Rica
#	Computer Engineering
#	CE5303: Embedded Systems Introduction
#	
#	Author: Jeremy Rodriguez Solorzano
#	Date: 26/10/2019
###

APP=test_counter
CPP=g++
LIBS=/opt/systemc/lib-linux64
INCLUDE=/opt/systemc/include
LINKERFLAGS=-lsystemc
LM=-lm
OUT=../bin

all:$(APP)

$(APP):$(APP).cpp
		g++ -I$(INCLUDE) -L$(LIBS) -o $(APP) $(APP).cpp $(LINKERFLAGS) $(LM)

clean:
		rm -f  $(OUT)/$(APP)*
		rm -f *.o

.PHONY:clean