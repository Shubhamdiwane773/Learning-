
#exe:
#	gcc main.c array_input.c array_ele.c -o exe

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
cc=gcc
CFLAGS= -c
final:main.o array_input.o array_ele.o
	$(cc) $^ -o $s@
.o:.c
	$(cc) $(CFLAGS) $<
clean:
	rm*.o
