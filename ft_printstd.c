/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:44:00 by cacarval          #+#    #+#             */
/*   Updated: 2023/04/28 15:40:57 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *s)
{
	if (!s)
		return (write(1, "(null)", 6));
	return (write(1, s, ft_strlen(s)));
}

int	ft_printchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_printnbr(int num)
{
	char	*num_to_str;
	int		length;

	ft_putnbr_fd(num, 1);
	num_to_str = ft_itoa(num);
	length = ft_strlen(num_to_str);
	free (num_to_str);
	return (length);
}

int	ft_printpercent(void)
{
	return (write(1, &"%", 1));
}
