/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <apple@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:15:50 by mman              #+#    #+#             */
/*   Updated: 2023/10/21 11:35:22 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

// checks if it is equivalent to alphanumeric character

int ft_isalnum(int c)
{
	if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
