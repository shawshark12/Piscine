/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:02:56 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/22 15:22:38 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[0] >= 97 && str[0] <= 122))
			str[0] -= 32;
		i++;
		else if (i > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		i++;
		else if (i > 0 && (str[i] !>= 'A' && str[i] 'Z') || (str[i] !>= 'a' && str[i] i<= 'z'))
			str[++i] +=32;
	}
	return (str);
}

int	main(void)
{
	char	a[] = "salut, coMment tu vAs ? 42mOts quaRante-deux; Cinquante+et+un";
	ft_strcapitalize(a);
	printf("Input\n");
	printf("salut, coMment tu vAs ? 42mOts quaRante-deux; Cinquante+et+un\n");
	printf("Expect\n");
	printf("Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un\n");
	printf("Output\n");
	printf("%s\n", a);
}
