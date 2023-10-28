/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <apple@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:36:51 by mman              #+#    #+#             */
/*   Updated: 2023/10/28 21:47:51 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	list_size(t_list *head)
{
	size_t	size;
	t_list	*current;

	size  = 0;
	current  = head;
	while (current != NULL)
	{
		size++;
		current = current->next;
	}
	return size;
}
