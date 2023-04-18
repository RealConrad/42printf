/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_specifiers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 07:54:48 by cwenz             #+#    #+#             */
/*   Updated: 2023/04/17 18:05:20 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
** @brief Writes a single char to standard output
** @param c The char to write
** @return Returns an int 1
*/
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
** @brief Writes a string to standard output
** @param str The string to write
** @return The length of the string
*/
int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		i += ft_putstr("(null)");
		return (i);
	}
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
