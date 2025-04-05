CC = gcc
CFLAGS = -g
SRC = main.c
OBJS = main.o replace.o
TARGET = main

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

sort.c: replace.c
	$(CC) $(CFLAGS) -c replace.c

clean:
	rm -rf $(TARGET) $(OBJS)
