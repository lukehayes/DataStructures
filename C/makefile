CC       = gcc
CFLAGS   = -Iinclude -g
SOURCES  = src/*.c
BIN      = -o bin/app
OBJ=obj
OBJS= $(OBJ)/list.o

$(OBJ)/%.o: src/%.c
	$(CC) $(CFLAGS) -c $^ -o $@

all: $(OBJS)
	$(CC) $(CFLAGS) main.c $^ $(BIN) $(LDFLAGS)

clean:
	rm -rf $(BIN) *.o
