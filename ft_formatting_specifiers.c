/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatting_specifiers.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 08:35:45 by cwenz             #+#    #+#             */
/*   Updated: 2023/04/17 16:49:52 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
** @brief Determines the specifier in the printf function
** @param c The specifier to check for
** @param args Current arg we checking for
** @return Length of the number/string
*/
int	ft_format_specifiers(int c, va_list args)
{
	int	length;

	length = 0;
	if (c == 'c') // CHAR
		length = ft_putchar(va_arg(args, int));
	else if (c == 's') // STRING
		length = ft_putstr(va_arg(args, char *));
	else if (c == 'p') // POINTER
		length = ft_putp(va_arg(args, void *));
	else if (c == 'd' || c == 'i') // INTS
		length = ft_putnum((long)va_arg(args, int));
	else if (c == 'u') // Unsigned int
		length = ft_putnum((long)va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X') // Hexadecimal
		length = ft_puthex((long)va_arg(args, unsigned int), c);
	else if (c == '%') // % Sign
		length = ft_putchar('%');
	return (length);
}
