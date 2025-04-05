CC = gcc
CFLAGS = -g
SRC = main.c
OBJS = main.o find_min_max.o
TARGET = main

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

sort.c: find_min_max.c
	$(CC) $(CFLAGS) -c find_min_max.c

clean:
	rm -rf $(TARGET) $(OBJS)
