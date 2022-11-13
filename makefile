#
# Makefile to build a library which can be included in python.
# Author: Andri Trottmann
# Date: 13.11.2022
#
CC        = g++
LINK      = g++

#Can be used to tell the compiler where also to look for libraries
#CUSTOMPATH = -I/home/someuser/workspace/somePath/somePath
CFLAGS    = -c -fPIC -Wall #$(CUSTOMPATH)
LFLAGS    = -shared -Wl,-soname,$(LIB)

OBJS      = Module.o
LIB       = libModule.so


$(LIB): $(OBJS)
	$(LINK) $(LFLAGS) -o ${@} $(OBJS)

Module.o: Module.cpp Module.h
	$(CC) $(CFLAGS) Module.cpp -o Module.o

clean:
	rm -f $(LIB) $(OBJS)
