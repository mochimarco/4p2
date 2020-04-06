CC=gcc
CFLAGS= -Wall -Werror -Wextra
NAME=libft.a
SRCS=srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
INCLUDES=includes/
OBJECTS=ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all:$(NAME)

$(NAME):$(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

$(OBJECTS):$(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS) -I$(INCLUDES)

fclean:clean
	rm -f $(NAME)

clean:
	rm -f *.o

re:fclean all
