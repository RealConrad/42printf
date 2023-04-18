/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 11:54:57 by cwenz             #+#    #+#             */
/*   Updated: 2023/04/15 18:55:07 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h> // REMOVE THIS
# include <stdlib.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putp(void *ptr);
int	ft_putnum(long num);
int	ft_puthex(long num, char c);
int	ft_format_specifiers(int c, va_list args);
int	ft_printf(const char *format, ...);

#endif
