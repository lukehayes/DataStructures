CC       = gcc
CFLAGS   = -Iinclude -g
SOURCES  = src/*.c

all:*.o
	$(CC) $(CFLAGS) main.c $^ -o app

%.o:%src/*.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf app *.o
