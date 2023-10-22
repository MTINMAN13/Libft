/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <apple@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:36:19 by mman              #+#    #+#             */
/*   Updated: 2023/10/22 11:56:34 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

// returns a pointer to the first occurrence of character c in the string s
// or to the null byte at the end if none

char	*ft_strchr(const char *s, int c)
{
	int	cloc;

	cloc = 0;
	while ((s[cloc] != c) && s[cloc])
		cloc++;
	return ((char *)(s + cloc));
}
