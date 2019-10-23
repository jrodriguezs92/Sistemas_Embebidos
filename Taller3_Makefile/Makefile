###
#	Makefile to test mymath library.
#   Main Makefile
#	
#	Instituto Tecnológico de Costa Rica
#	Computer Engineering
#	CE5303: Embedded Systems Introduction
#	
#	Author: Jeremy Rodriguez Solorzano
#	Date: 14/08/2019
###

all: src

lib:
		$(MAKE) -C lib

src: lib
		$(MAKE) -C src

clean:
		$(MAKE) -C lib clean
		$(MAKE) -C src clean
		clear

.PHONY: all lib src clean