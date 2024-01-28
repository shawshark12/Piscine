/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:31:16 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/27 13:50:41 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return;
}

/*int	main(void)
{
    	printf("Expect result : abcdef\n");
    	printf("User   result : ");
	fflush(stdout);
	ft_putstr("abcdef");

	printf("\n");
    	return (0);
}*/
