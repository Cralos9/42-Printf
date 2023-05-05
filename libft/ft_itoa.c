/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 10:35:44 by cacarval          #+#    #+#             */
/*   Updated: 2023/04/26 10:44:23 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	check_nbr(long nbr)
{
	if (nbr < 0)
		nbr = -nbr;
	return (nbr);
}

int	check_size(int n)
{	
	if (n > 0)
		n = 0;
	else
		n = 1;
	return (n);
}

char	*return_str(char *str, size_t size)
{
	if (size == 0 && str[1] == '\0')
		*(str + size) = '0';
	if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	size = check_size(n);
	nbr = check_nbr(nbr);
	while (n)
	{
		n /= 10;
		size++;
	}
	str = (char *)malloc(size + 1);
	if (!str)
		return (0);
	*(str + size--) = '\0';
	while (nbr > 0)
	{
		*(str + size--) = nbr % 10 + '0';
		nbr /= 10;
	}
	str = return_str(str, size);
	return (str);
}
