/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mman <mman@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:00:01 by mman              #+#    #+#             */
/*   Updated: 2023/10/28 20:42:30 by mman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*occurance;
	char	*chr;

	chr = (char *)s;
	occurance = NULL;
	if (c == '\0')
		return (chr + ft_strlen(s));
	while (*chr)
	{
		if (*chr == c)
			occurance = chr;
		chr++;
	}
	return (occurance);
}
