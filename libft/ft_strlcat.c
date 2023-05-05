/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:32:50 by cacarval          #+#    #+#             */
/*   Updated: 2023/04/20 12:38:04 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dst_length = ft_strlen(dst);
	j = dst_length;
	i = 0;
	if (dst_length < size - 1 && size > 0)
	{
		while (src[i] != '\0' && dst_length + i < size - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	if (dst_length >= size)
		dst_length = size;
	return (dst_length + src_length);
}

// int main()
// {
// 	char dst[15];
// 	memset(dst, 'r', 15);
// 	char src[] = "lorem ipsum dolor sit amet";

// 	printf("%zu\n",ft_strlcat(dst, src, 5));
// 	write(1, dst, 15);
// 	return(0);
// }