count:demoFunc.o calculakeFunc.o
	gcc demoFunc.o calculakeFunc.o -o count

demoFunc.o:demoFunc.c
	gcc -c demoFunc.c -o demoFunc.o

calculakeFunc.o:calculakeFunc.c
	gcc -c calculakeFunc.c -o calculakeFunc.o

clean:
	@rm -rf *.o count