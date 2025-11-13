/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 20:19:18 by ptavares          #+#    #+#             */
/*   Updated: 2025/11/13 20:34:30 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void	ft_swap(int a, int b)
{
	int	aux;
	aux = a;
	a = b;
	b = aux;
}

int	ft_atoi(char *str)
{
	int	sign;
	int	value;

	sign = 1;
	value = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while (*str >=0 && *str <= 9)
	{
		value = value * 10 + (*str - '0');
		str++;
	}
	return (value * sign);
}

int main(int ac, char **av)
{
	int		a;
	int 	b;
	char	sa;
	char	sb;

	if (ac == 3)
	{
		sa = av[1];
		sb = av[2];
		a = ft_atoi(sa);
		b = ft_atoi(sb);
		printf("A: %d\nB: %d\n", a, b);
		ft_swap(a, b);
		printf("A: %d\nB: %d\n", a, b);
	}
	return (0);
}
