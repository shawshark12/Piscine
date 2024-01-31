/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 00:23:05 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/31 01:39:33 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writenum(int	index)
{
	char	*num;

	num = "0123456789";
	write (1, &num[index], 1);
}

void	ft_putnumber(int a, int b, int c)
{
	ft_writenum(a);
	ft_writenum(b);
	ft_writenum(c);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	c = 0;
	while (a <= 7)
	{	
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_putnumber(a, b, c);
				write (1, ", ", 1);
				c++;
			}
			b++;
		}
		a++;
	}
}

int	main()
{
	ft_print_comb(void);
}
