/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npungkor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 01:46:17 by npungkor          #+#    #+#             */
/*   Updated: 2024/01/28 01:48:19 by npungkor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_atoi(char str)
{
    int i = 0;
    int numericStarted = 0;

    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            write(1, &str[i], 1);
            numericStarted = 1;
        }
        else if (numericStarted && !(str[i] >= '0' && str[i] <= '9'))
        {
            break; // Stop when the numeric part ends
        }
        i++;
    }
}

int ft_size(charstr)
{
    int size = 0;
    while (str[size] != '\0')
        size++;
    return size;
}

int main(void)
{
    char x[] = "---2234++ad55sads ";
    int size = ft_size(x);

    ft_atoi(x);

    return 0;
}
