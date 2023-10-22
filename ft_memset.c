/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <apple@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:16:15 by mman              #+#    #+#             */
/*   Updated: 2023/10/21 22:58:32 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

// The memset() function returns its first argument.
// writes len bytes of value c converted to the string b
// c is converted to unsigned char

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	buffer;

	buffer = 0;
	while (buffer < len)
		((char *)b)[buffer++] = (unsigned char)c;
	return (b);
}
