# Globales
CC = gcc
FILE = TablasdeConversion
CFLAGS = -c
OBJ = Conversion.o

build: makeobj
	$(CC) -o $(FILE).out $(FILE).o $(OBJ)

makeobj:
	$(CC) $(CFLAGS) $(FILE).c -o $(FILE).o
	$(CC) $(CFLAGS) Conversion.c -o $(OBJ)

# Clean
clean:
	rm -rf *.o
	rm -rf *.out
