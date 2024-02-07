/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akulaksi <akulaksi@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:18:24 by akulaksi          #+#    #+#             */
/*   Updated: 2024/02/07 10:29:36 by akulaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putstr(char *str) {
    while (*str) {
        ft_putchar(*str);
        str++;
    }
}

void print_hex_byte(unsigned char byte) {
    char hex_digits[] = "0123456789abcdef";
    ft_putchar(hex_digits[byte / 16]);
    ft_putchar(hex_digits[byte % 16]);
}

void print_memory_line(char *addr, unsigned int size) {
    unsigned int i = 0;

    while (i < 16) {
        if (i < size) {
            print_hex_byte(addr[i]);
        } else {
            ft_putstr("  ");
        }

        if (i % 2 == 1) {
            ft_putchar(' ');
        }

        i++;
    }

    ft_putstr(" ");

    i = 0;
    while (i < size) {
        if (addr[i] >= 32 && addr[i] <= 126) {
            ft_putchar(addr[i]);
        } else {
            ft_putchar('.');
        }
        i++;
    }

    ft_putchar('\n');
}

void *ft_print_memory(void *addr, unsigned int size) {
    unsigned int i = 0;
    char *current_addr = (char *)addr;

    while (i < size) {
        print_memory_line(current_addr + i, size - i < 16 ? size - i : 16);
        i += 16;
    }

    return addr;
}

int main(void) {
    char str[] = "Bonjour les amis\n"
                 "ches\nc est fou\ntout.ce qu on\n"
                 "peut faire avec.\n"
                 "\nprint_memory..\n"
                 "lol.lol. ";

    ft_print_memory(str, sizeof(str) - 1);

    return 0;
}
