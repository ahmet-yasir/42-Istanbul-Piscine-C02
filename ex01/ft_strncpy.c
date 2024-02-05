/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 12:52:02 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/05 12:56:29 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n)
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
    ft_strncpy(dest, src, 2);
    i = 0;
    while (dest[i] != '\0')
    {
        write(1,&dest[i], 1);
        i++;
    }
    return(0);
}*/