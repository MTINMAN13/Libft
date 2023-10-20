/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mman <mman@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:28:44 by mman              #+#    #+#             */
/*   Updated: 2023/09/21 23:34:32 by mman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// *  it will use at most n bytes from src; and
// *  src does not need to be null-terminated if it contains n or more bytes.

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len;
	unsigned int	lendva;

	len = 0;
	lendva = 0;
	while (dest[len])
		len++;
	while (lendva < nb && src[lendva])
	{
		dest[len] = src[lendva];
		len++;
		lendva++;
	}
	dest[len] = '\0';
	return (dest);
}
