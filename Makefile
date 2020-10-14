.PHONY: clean

MAIN = phys
CC = gcc
CFLAGS = -Wall -Wextra -g

SRCS = main.c world.c object.c phys.c
OBJS = $(SRCS:.c=.o)

all: $(MAIN)
	@echo Done!

$(MAIN):	$(OBJS)
	@echo Compiling $(OBJS) ...
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

clean:
	rm -rf *.o $(MAIN)