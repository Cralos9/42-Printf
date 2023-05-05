/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:49:22 by cacarval          #+#    #+#             */
/*   Updated: 2023/04/24 11:02:07 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	f(unsigned int i, char c)
// {
// 	return (c + i);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		slen;

	slen = ft_strlen(s);
	i = 0;
	str = (char *)malloc(slen + 1);
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		++i;
	}
	str[i] = '\0';
	return (str);
}
