/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:10:59 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/27 19:36:23 by npungkor         ###   ########.fr       */
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
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	if (i == nb)
		return (1);
	return (0);
}
/*int	main(void)
{
	printf("%d\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(12));
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(14));
	printf("%d\n", ft_is_prime(17));
}*/
