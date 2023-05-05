/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:32:15 by cacarval          #+#    #+#             */
/*   Updated: 2023/04/24 10:52:58 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	j = 1;
	a = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = (a * 10) + (str[i] - '0');
		i++;
	}
	a *= j;
	return (a);
}

// int main (void)
// {
// 	int b;
// 	int c;
// 	char a[] = "\t\n\r\v\t  469 \n";
// 	b=ft_atoi(a);
// 	c = atoi(a);
// 	printf("%i\n", b);
// 	printf("%i",c);
// 	return(0);
// }