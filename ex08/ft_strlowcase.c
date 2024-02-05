/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:59:01 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/05 14:00:06 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>

char    *ft_strupcase(char *str)
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

/*int main (void)
{
    char str[] = "";
    int i;

    i = 0;
    ft_strupcase(str);
    while (str[i] != '\0')
    {
        write(1,&str[i], 1);
        i++;
    }
    return(0);
}*/