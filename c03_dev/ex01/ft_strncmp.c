/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:26:12 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/24 23:17:27 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	int a, b, c, d, a1, b1, c1, d1;

	a = strncmp("", "", 5);
	b = strncmp("ABC", "ABX", 2);
	c = strncmp("ABCD", "AB", 3);
	d = strncmp("123", "12345", 4);

	a1 = ft_strncmp("", "", 5);
	b1 = ft_strncmp("ABC", "ABX", 2);
	c1 = ft_strncmp("ABCD", "AB", 3);
	d1 = ft_strncmp("123", "12345", 4);

	printf("Using C Function : %d %d %d %d\n", a, b, c, d);
	printf("Using ft_strncmp : %d %d %d %d", a1, b1, c1, d1);

	return(0);
}*/
