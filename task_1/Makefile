CC = gcc
CFLAGS = -g
SRC = main.c
OBJS = main.o sort.o
TARGET = main

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

sort.c: sort.c
	$(CC) $(CFLAGS) -c sort.c

clean:
	rm -rf $(TARGET) $(OBJS)
