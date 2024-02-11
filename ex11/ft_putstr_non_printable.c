/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:13:26 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/11 14:44:13 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[i] / 16]);
			ft_putchar("0123456789abcdef"[str[i] % 16]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main (void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien");
	ft_putchar('\n');
	ft_putstr_non_printable("Coucou tu vas bie\t\v\0n");
	ft_putchar('\n');
	ft_putstr_non_printable("");
}
