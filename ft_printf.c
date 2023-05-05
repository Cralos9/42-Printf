/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:00:24 by cacarval          #+#    #+#             */
/*   Updated: 2023/04/28 16:33:19 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_formats(va_list args, const char format)
{
	int	print_len;

	print_len = 0;
	if (format == 'c')
		print_len += ft_printchar(va_arg(args, int));
	else if (format == 's')
		print_len += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		print_len += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'x' || format == 'X')
		print_len += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == 'd' || format == 'i')
		print_len += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		print_len += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == '%')
		print_len += ft_printpercent();
	return (print_len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	arg;
	int		print_len;

	i = 0;
	print_len = 0;
	va_start (arg, format);
	while (format[i])
	{
		if (format[i] != '%')
			print_len += ft_printchar(format[i]);
		else
			print_len += ft_formats(arg, format[++i]);
		i++;
	}
	va_end(arg);
	return (print_len);
}
