
SRC = $(filter-out test.c, $(wildcard *.c))
CFLAGS += -std=c99 -Wall
DEPS = $(wildcard deps/*/*.c)
OBJS = $(DEPS:.c=.o)

%.o: %.c
	$(CC) $< -Ideps -c -o $@ $(CFLAGS)

test: $(OBJS)
	$(CC) -Ideps $(OBJS) -Wall -Werror test.c -o test
	./test

clean:
	rm -f test
	rm -f $(OBJS)

.PHONY: test
