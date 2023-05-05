/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:56:31 by cacarval          #+#    #+#             */
/*   Updated: 2023/04/19 15:02:38 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char	*str;
	size_t	slen1;
	size_t	slen2;

	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(slen1 + slen2 + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, s1, slen1 + 1);
	ft_strlcat(str + (slen1), s2, slen2 + 1);
	return (str);
}
