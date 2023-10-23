/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <apple@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:16:06 by mman              #+#    #+#             */
/*   Updated: 2023/10/22 22:18:13 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*cs1;
	const unsigned char	*cs2;

	i = 0;
	cs1 = (const unsigned char *)s1;
	cs2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (cs1[i] && cs2[i] && cs1[i] == cs2[i] && (n > i + 1))
		i++;
	if (i == n || (cs1[i] == '\0' && cs2[i] == '\0'))
		return (0);
	return (cs1[i] - cs2[i]);
}
