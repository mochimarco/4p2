CC=gcc
CFLAGS= -Wall -Werror -Wextra
NAME=ft_display_file
SRCS=srcs/display_file.c
INCLUDES=includes/
OBJECTS=display_file.o

all:$(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS)
$(OBJECTS):$(SRCS)
	$(CC) $(CFLAGS) -c -o $(OBJECTS) $(SRCS)

fclean:clean
	rm -f $(NAME)

clean:
	rm -f *.o

re:fclean all
