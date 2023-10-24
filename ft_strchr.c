/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <apple@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:36:19 by mman              #+#    #+#             */
/*   Updated: 2023/10/24 14:45:57 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

// returns a pointer to the first occurrence of character c in the string s
// or to the null byte at the end if none

char	*ft_strchr(const char *s, int c)
{
	int	cloc;

	cloc = 0;
	if (s == NULL)
		return (NULL);
	while (s[cloc])
	{
		if (s[cloc] == c)
			return ((char *)&s[cloc]);
		cloc++;
	}
	return (NULL);
}
