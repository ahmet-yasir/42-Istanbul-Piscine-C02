/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:34:56 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/05 12:49:08 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

/*int main (void)
{
    char *src = "deneme";
    char *dest;
    int i;

    i = 0;
    dest = (char *)malloc(sizeof(src));
    ft_strcpy(dest, src);
    i = 0;
    while (dest[i] != '\0')
    {
        write(1,&dest[i], 1);
        i++;
    }
    return(0);
}*/