/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 00:36:36 by npungkor          #+#    #+#             */
/*   Updated: 2024/02/01 01:12:59 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	repeat_alpha(char *str)
{
	int	i;
	int	repeat;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			repeat = str[i] - 64;
			while (repeat > 0)
			{
				write (1, &str[i], 1);
				repeat--;
			}
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			repeat = str[i] - 96;
			while (repeat > 0)
			{
				write (1, &str[i], 1);
				repeat--;
			}	
		}
		else
			write (1, &str[i], 1);
		i++;
	}	
}

int	main(int ac, char **av)
{
	if (ac > 2)
		write (1, "\n", 1);
	if (ac == 2)
		repeat_alpha(av[1]);
	return (0);	
}
