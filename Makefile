.PHONY: clean

MAIN := phys
CC := gcc
INCLUDES := -Iinclude
CFLAGS := -Wall -Wextra -g $(INCLUDES)

SOURCES := main.c $(wildcard src/*.c)
OBJS := $(patsubst %.c,%.o,$(SOURCES))
$(info compiling sources $(SOURCES) into $(OBJS))

all: $(MAIN)
	@echo Done!

$(MAIN):	$(OBJS)
	$(info Creating $(MAIN) executable...)
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@

clean:
	rm -rf *.o $(MAIN)