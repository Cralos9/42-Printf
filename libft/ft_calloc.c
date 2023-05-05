/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:19:58 by cacarval          #+#    #+#             */
/*   Updated: 2023/04/17 14:53:08 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = (char *)malloc (count * size);
	if (ptr == NULL)
		return (ptr);
	i = 0;
	while (i < count * size)
	{
		*(char *)(ptr + i) = 0;
		i++;
	}
	return (ptr);
}
