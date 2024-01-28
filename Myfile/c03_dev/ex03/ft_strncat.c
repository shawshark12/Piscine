/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:36:17 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/25 16:30:20 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && (dest[i] == '\0' && src[j] != '\0'))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*int     main(void)
{
	char str[300];

	strcpy(str,"1234");
    	printf("Real   result : %s\n",strncat(str,"ABCdef",0));
	strcpy(str,"1234");
    	printf("User   result : %s\n",ft_strncat(str,"ABCdef",0));

	strcpy(str,"Best Test ");
    	printf("Real   result : %s\n",strncat(str,"ABCdef",6));
	strcpy(str,"Best Test ");
    	printf("User   result : %s\n",ft_strncat(str,"ABCdef",6));

	strcpy(str,"Best Test ");
    	printf("Real   result : %s\n",strncat(str,"ABC",6));
	strcpy(str,"Best Test ");
    	printf("User   result : %s\n",ft_strncat(str,"ABC",6));

	strcpy(str,"Best Test ");
    	printf("Real   result : %s\n",strncat(str,"ABCdef",3));
	strcpy(str,"Best Test ");
    	printf("User   result : %s\n",ft_strncat(str,"ABCdef",3));

	strcpy(str,"Add empty.");
    	printf("Real   result : %s\n",strncat(str,"",3));
	strcpy(str,"Add empty.");
    	printf("User   result : %s\n",ft_strncat(str,"",3));

	strcpy(str,"");
    	printf("Real   result : %s\n",strncat(str,"",3));
	strcpy(str,"");
    	printf("User   result : %s\n",ft_strncat(str,"",3));

    	return (0);
}*/
