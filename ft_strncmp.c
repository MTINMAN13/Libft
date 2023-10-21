/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mman <mman@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:39:40 by mman              #+#    #+#             */
/*   Updated: 2023/10/21 17:39:55 by mman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	unsigned char	*subst;

	i = 0;
	while (s[i])
		i++;
	if (start > i)
		return (NULL);
	if ((start + len) < i)
		subst = malloc(len + 1);
	else
		subst = malloc(i - start + 1);
	i = 0;
	while (len > 0)
	{
		subst[i] = s[start + i];
		i++;
		len--;
	}
	subst[i] = '\0';
	return (subst);
}
