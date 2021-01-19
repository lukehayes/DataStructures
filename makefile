CC       = gcc
CFLAGS   = -Wall -g
INCLUDES = include
SOURCES  = src/*.c

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

all:%.o
	$(CC) $(CFLAGS) main.c $^ -o app -I $(INCLUDES)

clean:
	rm -rf app *.o
