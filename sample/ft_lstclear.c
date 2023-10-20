/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfraj <mfraj@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 18:24:47 by mfraj             #+#    #+#             */
/*   Updated: 2023/10/15 17:08:46 by mfraj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Deletes and frees the given node and every
// successor of that node, using the function ’del’
// and free(3).
// Finally, the pointer to the list must be set to
// NULL.
// lst: The address of a pointer to a node.
// del: The address of the function used to delete
// the content of the node.

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
// tmp = (*lst)->next;
// Save the next box in the row before deleting the current one
// ft_lstdelone(*lst, del);
// Use the function to delete the current box
// *lst = tmp;
// Move to the next box in the row
// there's no row of boxes (lst is not there)
// or the row is already empty (*lst is not there)
