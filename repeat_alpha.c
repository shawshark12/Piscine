/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:19:07 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/31 18:20:39 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_repeat_alpha(char	*input)
{
	int	i;
	int	repeat;
	
	i = 0;
	repeat = 0;
	while (input[i])
	{
		if (input[i] >= 65 && input[i] <= 90)
		{	
			repeat = input[i] - 64;
			while (repeat > 0)
			{
				//write (1, &input[i], 1);
				repeat--;
			}
		}
		if (input[i] >= 97 && input[i] <= 122)
		{
			repeat = input[i] - 96;
			while (repeat > 0)
			{
				//write (1, &input[i], 1);
				repeat--;
			}
		}
		else
		{
			write(1, &input[i], 1);
		}
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		write(1, &str[a], 1);
		a++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac < 2)
		return (0);
	while (ac)
	{
		ft_repeat_alpha(av[i]);
		ft_putstr(av[i]);
		i++;
	}
	write (1, "\n", 1);
	return 0;
}
