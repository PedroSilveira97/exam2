/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:33:30 by ptavares          #+#    #+#             */
/*   Updated: 2025/11/12 13:36:53 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_word(char *str)
{
	if (!str)
		return ;
	while (*str != ' ' || *str != '	' || *str)
	{
		write(1,&str,1);
		str++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		first_word(av[1]);
	return (1);
}
