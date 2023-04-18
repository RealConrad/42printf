/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 11:52:32 by cwenz             #+#    #+#             */
/*   Updated: 2023/04/17 18:08:09 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		printed_chars;
	va_list	args;
	int		i;

	if (!format)
		return (0);
	va_start(args, format);
	printed_chars = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && !format[i + 1])
			break ;
		if (format[i] == '%')
			printed_chars += ft_format_specifiers(format[++i], args);
		else
			printed_chars += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (printed_chars);
}
