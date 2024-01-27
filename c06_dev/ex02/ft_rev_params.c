/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 00:31:41 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/28 00:53:50 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putstr(char *str)
{
	int	a;
	char	b;

	a = 0;
	while (str[a])
	{
		b = str[a];
		write(1, &b, 1);
		a++;
	}
}
int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i < argc && i>= 1)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i--;
	}
}