/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 23:32:05 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/29 15:17:35 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*superman;

	superman = *a;
	*a = *b;
	*b = superman;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;
	int	index;

	i = 1;
	j = 1;
	k = 1;
	index = argc;
	while (i < argc)
	{
		while (j < index - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				ft_swap(&argv[j], &argv[j + 1]);
			j++;
		}
		j = 1;
		i++;
	}
	while (k < argc)
	{
		ft_putstr(argv[k]);
		k++;
	}
}
