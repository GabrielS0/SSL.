RM = rm -f

run: hello
	./hello

hello: hello.o
	gcc hello.o -o hello
	$(RM) hello.o

hello.o: hello.c
	gcc -c hello.c -o hello.o -std=c18

clean:
	
	$(RM) hello.o hello