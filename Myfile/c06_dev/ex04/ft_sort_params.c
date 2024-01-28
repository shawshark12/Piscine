/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 23:32:05 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/29 00:40:20 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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

void	swap(char **a, char **b)
{
	char	*superman;

	superman = *a;
	*a = *b;
	*b = superman;
}

int	main(int ac, char av[])
{
	int	i;
	int	j;
	int	min;

	i = 1;
	while (i < ac)
	{
		min = i;
		j = i + 1;
		if (ft_strmp(av[j], av[min]) <= 0)
			min = j;
		j++;
	}
	swap(&av[min], &av[i]);

}

