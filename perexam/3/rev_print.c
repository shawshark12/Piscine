/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:31:14 by npungkor          #+#    #+#             */
/*   Updated: 2024/02/01 16:56:16 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		write (1, &str[i], 1);
		i--;
	}
	write (1, "\n", 1);
	return (str);
}

int	main(void)
{
	ft_rev_print("abcd");
}
