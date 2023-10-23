/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <apple@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:16:02 by mman              #+#    #+#             */
/*   Updated: 2023/10/22 22:58:59 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

// scans N bytes from S for first instance of C
// return pointer to the matching byte or NULL

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				offset;
	unsigned char	*derefds;

	derefds = (unsigned char *)s;
	offset = 0;
	while (offset < n)
	{
		if (derefds[offset] != (unsigned char)c)
			offset++;
		else
			return ((void *)(s + offset));
	}
	return (NULL);
}
