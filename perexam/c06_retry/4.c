/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:29:37 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/31 23:57:13 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	ft_swap(char *a, char *b)
{
	char	superman;

	superman = *a;
	*a = *b;
	*b = superman;
}

int	ft_strcmp(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] && b[i])
	{
		if (a[i] > b[i])
			return (1);
		if (a[i] < b[i])
			return (-1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	loop;
	int	k;

	i = 1;
	j = 1;
	loop = ac - 1;
	while (i < ac)
	{
		while (j < loop)
		{
			if (ft_strcmp(av[j], av[j + 1]) > 0)
				ft_swap(av[j], av[j + 1]);
			j++;
		}
		j = 0;
		loop -= 1;
		i++;	
	}
	k = 1; //for write string
	while (av[k])
	{
		ft_putstr(av[k]);
		write (1, "\n", 1);
		k++;
	}
}
