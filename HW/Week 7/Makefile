CC = gcc
CC_FLAGS = -Wall

LIBS = -lm

BIN = hw
SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)

$(BIN): $(OBJECTS)
	$(CC) $(OBJECTS) $(LIBS) -o $(BIN)

%.o: %.c
	$(CC) -c $(CC_FLAGS) $< -o $@

clean:
	rm -f $(BIN) $(OBJECTS)
