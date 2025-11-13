/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 20:59:38 by ptavares          #+#    #+#             */
/*   Updated: 2025/11/13 14:09:00 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_print(char *str)
{
	int		len;
	int		i;
	char	aux[256];

	len = 0;
	while (str[len])
		len++;
	i = 0;
	len--;
	while (len >= 0)
	{
		aux[i] = str[len];
		write(1, &aux[i], 1);
		i++;
		len--;
	}
	aux[i] = '\0';
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
