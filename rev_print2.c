#include <unistd.h>

void	rev_print(char *str)
{
	if (!str)
		return ;
	while (*str)
		str++;
	str--;
	if (!str)
		return;
	while (*str)
	{
		write(1, str, 1);
		str--;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		rev_print(av[1]);
	}
	write(1, "\n", 1);
	return (0);
}
