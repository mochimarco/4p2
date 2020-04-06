#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int		ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

void	display(int count, char *files[])
{
	int		file;
	char	buffer[8192];
	int		i;
	ssize_t	bytes;
	char	*filename;

	i = 0;
	while (++i < count)
	{
		filename = files[i];
		file = open(filename, O_RDWR);
		if (file < 0)
		{
			write(2, "cat: ", 5);
			write(2, filename, ft_strlen(filename));
			if (errno == 21)
				write(2, ": Is a directory\n", 17);
			else
				write(2, ": No such file or directory\n", 28);
			continue ;
		}
		while ((bytes = read(file, &buffer, 8192)))
			write(1, &buffer, bytes);
		close(file);
	}
}

void	write_in_term(void)
{
	char	c;

	while (read(0, &c, 1) > 0)
		write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		write_in_term();
	else
		display(argc, argv);
	return (0);
}
