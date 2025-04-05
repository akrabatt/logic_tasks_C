CC = gcc
CFLAGS = -g
SRC = main.c
OBJS = main.o pars.o
TARGET = main

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

sort.c: pars.c
	$(CC) $(CFLAGS) -c pars.c

clean:
	rm -rf $(TARGET) $(OBJS)
