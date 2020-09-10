all: main.c genscd.h 
	gcc -o gensine main.c genscd.h -lm
	gcc -o gendial main2.c genscd.h -lm
clean:
	$(RM) gensine gendial *.o
