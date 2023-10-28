/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mman <mman@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:31:07 by mman              #+#    #+#             */
/*   Updated: 2023/10/28 21:13:43 by mman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*clone;

	if (lst == NULL && new)
	{
		*lst = new;
		return ;
	}
	if (new == NULL)
		return ;
	clone = *lst;
	while (clone->next)
		clone = clone->next;
	clone->next = new;
}
