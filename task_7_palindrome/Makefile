CC = gcc
CFLAGS = -g
OBJFLAG = -c
OFLAG = -o
OBJS = main.o palindrome.o
TARGET = main

$(TARGET): $(OBJS)
	$(CC) $(CFLAG) $(OFLAG) $(TARGET) $(OBJS)

main.o: main.c
	$(CC) $(CFLAGS) $(OBJFLAG) main.c

palindrome.o: palindrome.c
	$(CC) $(CFLAGS) $(OBJFLAG) palindrome.c

clean:
	rm -rf $(TARGET) $(OBJS)
