/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mman <mman@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:00:01 by mman              #+#    #+#             */
/*   Updated: 2023/10/27 16:00:46 by mman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns a pointer to the LAST occurrence of character c in the string s
// or to the null byte at the end if none

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*occurance;

	occurance = NULL;
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == (char)c)
			occurance = (char *)s;
		s++;
	}
	return (occurance);
}
