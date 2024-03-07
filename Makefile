# Variables
CC = gcc
CFLAGS = -O2 -g -I.
LIBDIR = /home/dadi/lib
INCLUDEDIR = /home/dadi/include
INCLUDESUBDIR = $(INCLUDEDIR)/staque

LIBNAME = libstaque.a

# Default target
all: library

# Library target
library: stack.o queue.o
	ar rcs $(LIBNAME) stack.o queue.o

# Object file targets
stack.o: stack.c defs.h
	$(CC) $(CFLAGS) -c -o $@ $<

queue.o: queue.c defs.h
	$(CC) $(CFLAGS) -c -o $@ $<

# Install target
install: library
	cp $(LIBNAME) $(LIBDIR)
	mkdir -p $(INCLUDESUBDIR)
	cp defs.h stack.h queue.h $(INCLUDESUBDIR)
	cp staque.h $(INCLUDEDIR)

# Clean target
clean:
	rm -f *.o $(LIBNAME)

