# -*- MakeFile -*- 


CC=gcc
AR=ar
OBJECTS_MAIN = main.o
OBJECTS_LIB = power.o basicMath.o
FLAGS = -Wall -g


all: mymaths mymathd mains maind main.o power.o basicMath.o

mymaths: $(OBJECTS_LIB)
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB)
mymathd: $(OBJECTS_LIB)
	gcc -Wall -g -shared power.o basicMath.o -o libmyMath.so
mains: $(OBJECTS_MAIN) mymaths
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a
maind: $(OBJECTS_MAIN) mymathd
	gcc -Wall -g -o maind main.o ./libmyMath.so
main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind
