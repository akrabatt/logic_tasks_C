CC = gcc
CFLAGS = -g
OFLAG = -o 
OBJFLAG = -c
OBJS = main.o reverse.o
TARGET = main

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OFLAG) $(TARGET) $(OBJS)

main.o: main.c
	$(CC) $(CFLAGS) $(OBJFLAG) main.c

reverse.o: reverse.c
	$(CC) $(CFLAGS) $(OBJFLAG) reverse.c

clean:
	rm -rf $(TARGET) $(OBJS)
