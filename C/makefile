CC       = gcc
CFLAGS   = -Iinclude -g
SOURCES  = src/*.c
BIN      = "bin/app"

all:*.o
	$(shell mkdir -p bin)
	$(CC) $(CFLAGS) main.c $^ -o $(BIN)

%.o:%src/*.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf $(BIN) *.o
