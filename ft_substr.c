/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <apple@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:34:33 by mman              #+#    #+#             */
/*   Updated: 2023/10/24 15:24:53 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *new_str;
	size_t i = start;
	size_t j = 0;

	if (!s)
		return (NULL);

	if (start >= ft_strlen(s)) {
		return (ft_strdup(""));
	}

	if (!(new_str = (char *)malloc(len + 1)))
		return (NULL);

	while (s[i] && j < len) {
		new_str[j++] = s[i++];
	}

	new_str[j] = '\0';

	return (new_str);
}
