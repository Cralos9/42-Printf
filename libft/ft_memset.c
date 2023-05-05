/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:03:58 by cacarval          #+#    #+#             */
/*   Updated: 2023/04/17 11:06:23 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*b;

	b = s;
	while (n > 0)
	{
		*b = c;
		b++;
		n--;
	}
	return (s);
}

// int main()
// {
// 	char a[] = "azul";
// 	char *s;
// 	char *b;
// 	s = ft_memset(a, '3',1);
// 	b = memset(a,'3',1);
// 	printf("%s\n",s);
// 	printf("%s\n",b);
// 	return(0);
// }