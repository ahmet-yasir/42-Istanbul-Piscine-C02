/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:33:37 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/05 15:00:21 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n - 1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (i);
}

/*int main (void)
{
    char *src = "deneme";
    char *dest;
    int i;

    dest = (char *)malloc(sizeof(char)*2);
    ft_strlcpy(dest, src, 2);
    i = 0;
    while (dest[i] != '\0')
    {
        write(1,&dest[i], 1);
        i++;
    }
    printf("\n%d", ft_strlcpy(dest, src, 2));
    return(0);
}*/