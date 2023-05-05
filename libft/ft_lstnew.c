/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacarval <cacarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:02:20 by cacarval          #+#    #+#             */
/*   Updated: 2023/04/21 13:13:31 by cacarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*i;

	i = (t_list *)malloc(sizeof(*i));
	if (!i)
		return (NULL);
	i -> content = content;
	i -> next = NULL;
	return (i);
}
