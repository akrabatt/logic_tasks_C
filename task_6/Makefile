CC = gcc
CFLAGS = -g
OBJFLAGS = -c
OFLAG = -o
OBJS = main.o sort.o
TARGET = main

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OFLAG) $(TARGET) $(OBJS)

main.o: main.c
	$(CC) $(CFLAGS) $(OBJFLAG) main.c

sort.o: sort.c
	$(CC) $(CFLAGS) $(OBJFLAG) sort.c

clean:
	rm -rf $(TARGET) $(OBJS)
