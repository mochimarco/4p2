gcc -c ft_atoi.c -o ft_atoi.o
gcc -c ft_putchar.c -o ft_putchar.o
gcc -c ft_swap.c -o ft_swap.o
gcc -c ft_putstr.c -o ft_putstr.o
gcc -c ft_strcpy.c -o ft_strcpy.o
gcc -c ft_strcat.c -o ft_strcat.o
gcc -c ft_strlen.c -o ft_strlen.o
gcc -c ft_strcmp.c -o ft_strcmp.o
gcc -c ft_putnbr.c -o ft_putnbr.o

ar -rv libft.a ft_putnbr.o ft_strcat.o ft_strcpy.o ft_atoi.o ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
