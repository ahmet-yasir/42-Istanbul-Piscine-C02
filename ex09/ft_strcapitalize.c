/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:11:06 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/05 14:30:23 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>

char    *ft_strlowcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z'))
            str[i] += 32;
        i++;
    }
    return (str);
}

char    *ft_strcapitalize(char *str)
{
    int i;

    i = 1;
    ft_strlowcase(str);
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') && (!((str[i-1] >= 'a' && str[i-1] <= 'z') || (str[i-1] >= 'A' && str[i-1] <= 'Z'))))
            str[i] -= 32;
        i++;
    }
    if ((str[0] >= 'a' && str[i] <= 'z'))
        str[0] -=32;
    return (str);
}

int main (void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    int i;

    i = 0;
    ft_strcapitalize(str);
    while (str[i] != '\0')
    {
        write(1,&str[i], 1);
        i++;
    }
    return(0);
}