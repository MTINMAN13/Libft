/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfraj <mfraj@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:21:35 by mfraj             #+#    #+#             */
/*   Updated: 2023/10/17 18:36:07 by mfraj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>
// search for a specific byte in a block of memory

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	unsigned char		uc;

	src = (const unsigned char *)s;
	uc = (unsigned char)c;
	while (n-- > 0)
	{
		if (*src == uc)
		{
			return ((void *)src);
		}
		src++;
	}
	return (NULL);
}

// int main()
// {
// 	const char *str = "Hello, World!";
// 	char target = 'W';
// 	void *result = ft_memchr(str, target, strlen(str));
// 	if (result != NULL)
// 	{
// 		printf("'%c' found at position: %ld\n", target, (long)
// 			((char *)result - str));
// 	}
// 	else
// 	{
// 		printf("'%c' not found in the string.\n", target);
// 	}
// 	return 0;
// }