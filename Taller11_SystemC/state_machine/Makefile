###
#	Makefile to test the state machine system C program.
#   src Makefile
#	
#	Instituto Tecnológico de Costa Rica
#	Computer Engineering
#	CE5303: Embedded Systems Introduction
#	
#	Author: Jeremy Rodriguez Solorzano
#	Date: 26/10/2019
###

APP=test_statemachine
CPP=g++
LIBS=/opt/systemc/lib-linux64
INCLUDE=/opt/systemc/include
LINKERFLAGS=-lsystemc
LM=-lm

all:$(APP)

$(APP):$(APP).cpp
		g++ -I$(INCLUDE) -L$(LIBS) -o $(APP) $(APP).cpp $(LINKERFLAGS) $(LM)

clean:
		rm -f  $(APP)
		rm -f *.o
		rm -f *.vcd

.PHONY:clean