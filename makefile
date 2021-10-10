myTimer: myTimer.o my_timer.o
	gcc -o myTimer myTimer.o my_timer.o

myTimer.o: myTimer.c my_timer.h
	gcc -c myTimer.c

my_timer.o: my_timer.c my_timer.h
	gcc -c my_timer.c 