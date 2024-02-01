/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 02:00:12 by npungkor          #+#    #+#             */
/*   Updated: 2024/02/01 02:09:44 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= '7')
	{	
		write (1, &a, 1);
		while (b <= '8')
		{
			write (1, &b, 1);
			while (c <= '9')
			{
				write (1, &c, 1);
				c++;	
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb();
}
