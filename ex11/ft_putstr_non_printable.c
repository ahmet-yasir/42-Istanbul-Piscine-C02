/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:13:26 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/10 14:36:37 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str >= 127)
		{
			write(1, "\\", 1);
			write(1, "0123456789abcdef" + (*str >> 4), 1);
			write(1, "0123456789abcdef" + (*str & 0xF), 1);
		}
		else
			write(1, str, 1);
		str++;
	}
}
