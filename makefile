CC = gcc
AR = ar -rcs
FLAGS = -Wall -g
main = main.o
mat = my_mat.o

all: connections library

library: lib.a

lib.a: $(mat)
	$(AR) lib.a $(mat)

connections: $(main) lib.a
	$(CC) $(FLAGS) -o connections $(main) lib.a


main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

.PHONY: clean all

Clean:
	rm -f *.o *.a connections library