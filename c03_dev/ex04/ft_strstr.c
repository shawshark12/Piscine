/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:14:28 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/23 21:35:53 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && to_find[i] && str[i] == to_find[i])
		{
			i++;
			j++;
			if (to_find[i] == '\0')
				return (str);
		}
		i++;
	}
	return (0);
}

int     main(void)
{
	char str[300];

	strcpy(str,"");
    	printf("Real   result : %s\n",strstr(str,""));
	strcpy(str,"");
    	printf("User   result : %s\n",ft_strstr(str,""));

	strcpy(str,"1234");
    	printf("Real   result : %s\n",strstr(str,"ABCdef"));
	strcpy(str,"1234");
    	printf("User   result : %s\n",ft_strstr(str,"ABCdef"));

	strcpy(str,"Best Test ");
    	printf("Real   result : %s\n",strstr(str," "));
	strcpy(str,"Best Test ");
    	printf("User   result : %s\n",ft_strstr(str," "));

	strcpy(str,"Test empty.");
    	printf("Real   result : %s\n",strstr(str,"empty. "));
	strcpy(str,"Test empty.");
    	printf("User   result : %s\n",ft_strstr(str,"empty. "));

	strcpy(str,"ABCd");
    	printf("Real   result : %s\n",strstr(str,"C"));
	strcpy(str,"ABCd");
    	printf("User   result : %s\n",ft_strstr(str,"C"));

    	return (0);
}

