/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:20:05 by cacarval          #+#    #+#             */
/*   Updated: 2023/05/02 10:30:17 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_printchar(char c);
int		ft_printstr(char *s);
int		ft_printnbr(int num);
int		ft_print_hex(unsigned int num, const char format);
int		ft_print_ptr(unsigned long ptr);
int		ft_printf(const char *format, ...);
int		ft_print_unsigned(unsigned int n);
int		ft_printpercent(void);

#endif