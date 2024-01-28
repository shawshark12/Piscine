/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 18:06:13 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/29 01:50:30 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb))
			break ;
		nb++;
	}
	return (nb);
}
/*int	main(void)
{
	printf("%d\n", ft_find_next_prime(56));
	printf("%d\n", ft_find_next_prime(77));
	printf("%d\n", ft_find_next_prime(17));
	printf("%d\n", ft_find_next_prime(495498));
	printf("%d\n", ft_find_next_prime(12368));
	printf("%d\n", ft_find_next_prime(100006));
	printf("%d\n", ft_find_next_prime(7777734));
	printf("%d\n", ft_find_next_prime(532342));
}*/
