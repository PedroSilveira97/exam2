/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 20:30:02 by ptavares          #+#    #+#             */
/*   Updated: 2025/11/12 20:51:13 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb >= -2147483648 || nb <= 2147483647)
	{
		if (nb < 0)
		{
			nb = nb * -1;
			write(1, "-", 1);
		}
		else if (nb == 0)
			write (1, "0", 1);
		else
		{
			c = (nb % 10) - '0';
			write(1, c, 1);
			ft_putnbr(nb / 10);
		}
	}
}

int	main(void)
{
	int	n;

	n = 0;
	while (n <= 100)
	{
		if (n % 5 == 0 && n % 3 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (n % 3 == 0)
			write(1, "fizz\n", 5);
		else if (n % 5 == 0)
			write(1, "buzz\n", 5);
		else
			ft_putnbr(n);
		n++;
	}
	return (0);
}
