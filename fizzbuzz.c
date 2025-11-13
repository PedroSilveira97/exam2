/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 20:30:02 by ptavares          #+#    #+#             */
/*   Updated: 2025/11/13 10:53:16 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
	}
	else if (nb <= 9)
		ft_putchar(nb + '0');
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	write(1, "\n", 1);
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
