/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:43:29 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/29 01:41:39 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	unsigned int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i <= (unsigned int) nb)
	{
		if (i * i == (unsigned int) nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*int	main(void)
{
	printf("%d\n", ft_sqrt(100));
	printf("%d", ft_sqrt(-100));
}*/
