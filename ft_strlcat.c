/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mman <mman@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:49:44 by mman              #+#    #+#             */
/*   Updated: 2023/10/21 17:54:02 by mman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen + dstlen);
}
