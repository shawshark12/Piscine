/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 15:10:35 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/26 15:53:42 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*rev_string(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	printf("%d\n", i);
	while(i >= 0)
	{
		write (1, &str[i], 1);
		i--;
	}
	return(str);
}

int	main(void)
{
	printf("\n%s\n", rev_string("abcdefg"));
}
