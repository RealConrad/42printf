/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_specifiers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 09:45:12 by cwenz             #+#    #+#             */
/*   Updated: 2023/04/17 16:28:33 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
** @brief Converts a long integer to a string and prints it
** @param num The long integer to be converted to string
** @return The number of characters printed
*/
int	ft_putnum(long num)
{
	int	i;

	i = 0;
	if (num < 0)
	{
		num *= -1;
		i += ft_putchar('-');
	}
	if (num < 10)
		i += ft_putchar(num % 10 + 48);
	else if (num >= 10)
	{
		i += ft_putnum(num / 10);
		i += ft_putnum(num % 10);
	}
	return (i);
}

/**
** @brief Converts a long integer to a hexadecimal string and prints it
** @param num The long integer to be converted
** @param c Char representing the case for hexadecimal digits (x or X)
** @return The number of characters printed
*/
int	ft_puthex(long num, char c)
{
	int		i;
	int		length;
	char	hex_string[17];
	char	*hex;

	hex = "0123456789ABCDEF";
	if (c == 'x')
		hex = "0123456789abcdef";
	i = 0;
	length = 0;
	if (num == 0)
		return (ft_putchar('0'));
	while (num != 0)
	{
		hex_string[i] = hex[num % 16];
		num /= 16;
		i++;
	}
	while (i > 0)
	{
		i--;
		length += ft_putchar(hex_string[i]);
	}
	return (length);
}

/**
** @brief Prints the memory address of a given pointer in hexadecimal format
** @param ptr  void pointer to print the memory address of
** @return The number of characters printed
*/
int	ft_putp(void *ptr)
{
	int				i;
	int				length;
	char			hex_string[17];
	char			*hex;
	unsigned long	p;

	p = (unsigned long)ptr;
	hex = "0123456789abcdef";
	i = 0;
	length = 0;
	if (!ptr)
		return (ft_putstr("0x0"));
	while (p != 0)
	{
		hex_string[i] = hex[p % 16];
		p /= 16;
		i++;
	}
	length += ft_putstr("0x");
	while (i > 0)
	{
		i--;
		length += ft_putchar(hex_string[i]);
	}
	return (length);
}

// int	main(void)
// {
// 	int	length;

// 	length = ft_putp(74574212);
// 	printf("\nPRINTF: %d\n", 74574212);
// 	printf("\nLENGTH: %d\n", length);
// 	return (0);
// }
