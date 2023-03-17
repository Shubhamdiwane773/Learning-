#exe:
:gcc main.c array_input.c array_ele.c -o exe

#clean:
#	rm *.0
#-----------------------method 2---------------------

#cc=gcc
#exe:
#	$(cc) main.c array_input.c array_ele.c -o exe
#clean:
#	rm -f exe
#	rm *.0
#-----------------------METHOD3------------
#
#exe: main.o array_input.o array_ele.o
#	gcc main.o array_input.o array_ele.o -o exe
#main.o:main.c
#	gcc -c main.c
#array_input.o:array_input.c
#	gcc -c array_input.c
#array_ele.o:array_ele.c
#	gcc -c array_ele.c
#clean:
#	rm *.o

#-------------------METHOD4--------
#CC = gcc
#CFLAGS = -c
#exe: main.o array_input.o array_ele.o
#	$(CC) main.o array_input.o array_ele.o -o exe
#main.o:main.c
#	$(CC) $(CFLAGS) main.c
#array_input.o:array_input.c
#	$(CC) $(CFLAGS) array_input.c
#array_ele.o:array_ele.c
#	$(CC) $(CFLAGS) array_ele.c
#clean:
#	rm *.o
#--------------------METHOD5---------
#CC = gcc
#FLAGS = -c
#exe: main.o array_input.o array_ele.o
#	gcc $^ -o $@
#main.o:main.c
#	$(CC) $(CFLAGS) $<
#array_input.o:array_input.c
#	$(CC) $(CFLAGS) $<
#array_ele.o:array_ele.c
#	$(CC) $(CFLAGS) $<
#clean:
#	rm *.o

#--------METHOD 6-----------------
#cc=gcc
#CFLAGS= -c
#final:main.o array_input.o array_ele.o
#	$(cc) $^ -o $s@
#.o:.c
#	$(cc) $(CFLAGS) $<
#clean:
#	rm*.o
#-----------method 7--------------
#CC=gcc
#CFLAGS = -c
#OBJS = main.o add.o sub.o
#HDR = header.h
#exe : $(OBJS) $(HDR)
#	$(CC) $(OBJS) -o exe
#main.o : main.c
#	$(CC) $(CFLAGS) main.c
#add.o : add.c
#	$(CC) $(CFLAGS) add.c
#sub.o : sub.c
#	$(CC) $(CFLAGS) sub.c
#clean : 
#	rm *.o
#	rm exe
#----------------- METHOD 8 ----------------
OBJ := $(patsubst %.c,%.o, $(wildcard *.c))

exe : $(OBJ)
	gcc $(OBJ) -o $@
clean:
	rm exe *.o
