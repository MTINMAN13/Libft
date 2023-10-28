/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mman <mman@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:36:51 by mman              #+#    #+#             */
/*   Updated: 2023/10/28 21:03:02 by mman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	ft_lstsize(t_list *lst)
{
	t_list	*clone;
	int		size;

	if (lst == NULL)
		return (0);
	size = 0;
	clone = lst;
	while (clone->next)
	{
		size++;
		clone = clone->next;
	}
	return (size);
}
