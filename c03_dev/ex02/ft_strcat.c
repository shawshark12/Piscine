/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:16:57 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/25 02:36:47 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
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

	strcpy(str,"");
    	printf("Real   result : %s\n",strcat(str,"ABCdef"));
	strcpy(str,"");
    	printf("User   result : %s\n",ft_strcat(str,"ABCdef"));

	strcpy(str,"1234");
    	printf("Real   result : %s\n",strcat(str,"ABCdef"));
	strcpy(str,"1234");
    	printf("User   result : %s\n",ft_strcat(str,"ABCdef"));

	strcpy(str,"Best Test ");
    	printf("Real   result : %s\n",strcat(str,"ABCdef"));
	strcpy(str,"Best Test ");
    	printf("User   result : %s\n",ft_strcat(str,"ABCdef"));

	strcpy(str,"Add empty.");
    	printf("Real   result : %s\n",strcat(str,""));
	strcpy(str,"Add empty.");
    	printf("User   result : %s\n",ft_strcat(str,""));

	strcpy(str,"");
    	printf("Real   result : %s\n",strcat(str,""));
	strcpy(str,"");
    	printf("User   result : %s\n",ft_strcat(str,""));

    	return (0);
}*/
