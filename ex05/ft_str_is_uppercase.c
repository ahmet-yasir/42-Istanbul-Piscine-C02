/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:30:43 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/05 13:33:30 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>

int ft_str_is_uppercase (char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z'))
            return (0);
        i++;
    }
    return (1);
}

/*int main (void)
{
    char *str = "";
    int result;
    
    result = ft_str_is_uppercase(str) + '0';
    write(1,&result, 1);
    return (0);
}*/