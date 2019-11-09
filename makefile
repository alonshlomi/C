prog: basicMath.o power.o main.o
	gcc basicMath.o power.o main.o -o prog

basicMath.o: basicMath.c myMath.h
	gcc -c basicMath.c

power.o: power.c myMath.h
	gcc -c power.c

main.o: myMath.h
	gcc -c main.c 			
