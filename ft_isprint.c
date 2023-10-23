/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <apple@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:16:00 by mman              #+#    #+#             */
/*   Updated: 2023/10/22 22:10:39 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

// checks for any printable character including space.

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 176)
		return (1);
	else
		return (0);
}
