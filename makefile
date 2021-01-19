CC       = gcc
CFLAGS   = -Wall -g
INCLUDES = include
SOURCES  = src/*.c

all:*.o
	$(CC) $(CFLAGS) main.c $< -o app -I $(INCLUDES)

%.o:%src/*.c
	$(CC) $(CFLAGS) -c $< -I $(INCLUDES)

clean:
	rm -rf app *.o
