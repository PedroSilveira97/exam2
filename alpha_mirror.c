/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 21:16:33 by ptavares          #+#    #+#             */
/*   Updated: 2025/11/13 21:36:46 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	alpha_mirror(char c)
{
	char	a;
	int		count;

	count = 1;
	if (c >= 'a' && c <= 'z')
		a = 'a';
	else if (c >= 'A' && c <= 'Z')
		a = 'A';
	while (a != c)
	{
		count++;
		a++;
	}
	if (count <= 13)
		a = 'z' + 1 - count;
	else if (count > 13)
		a = 'a' - 1 + count;
	return(a);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
		{
			*av[1] = alpha_mirror(*av[1]);
			write(1, av[1], 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
