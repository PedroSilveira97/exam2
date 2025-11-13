/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:42:52 by ptavares          #+#    #+#             */
/*   Updated: 2025/11/13 21:15:16 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	char	lcase;
	char	ucase;
	int		i;

	while (*str)
	{
		lcase = 'a' - 1;
		ucase = 'A' - 1;
		i = 0;
		if (*str >= 'A' && *str <= 'Z')
		{
			while (ucase != *str)
			{
				i++;
				ucase++;
			}
			while (i > 0)
			{
				write(1, str, 1);
				i--;
			}
		}
		else if (*str >= 'a' && *str <= 'z')
		{
			while (lcase != *str)
			{
				i++;
				lcase++;
			}
			while (i > 0)
			{
				write(1, str, 1);
				i--;
			}
		}
		else
			write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		repeat_alpha(av[1]);
	return (0);
}
