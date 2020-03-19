CC := gcc
CFLAGS := -g -Wall -Wextra -Werror
all:
	$(CC) $(CFLAGS) -o text text.c
text:
	$(CC) $(CFLAGS) -o text text.c
clean:
	$(RM) text
