CC = gcc
CFLAGS = -g
OBJFLAGS = -c
OFLAG = -o
OBJS = main.o sort.o
TARGET = main

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OFLAG) $(TARGET) $(OBJS)

main.0: main.c
	$(CC) $(CFLAGS) $(OBJFLAG) main.c

sort.0: sort.c
	$(CC) $(CFLAGS) $(OBJFLAG) sort.c

clean:
	rm -rf $(TARGET) $(OBJS)
