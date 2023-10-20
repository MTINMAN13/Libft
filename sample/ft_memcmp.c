/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfraj <mfraj@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:22:32 by mfraj             #+#    #+#             */
/*   Updated: 2023/10/17 18:56:36 by mfraj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>
// compares two memory blocks (s1 and s2) 
// up to a specified number of bytes (n)

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}

// int main()
// {
// 	const char *str1 = "Hello, World!";
// 	const char *str2 = "Hello, World!";
// 	const char *str3 = "Goodbye, World!";
// 	int result1 = ft_memcmp(str1, str2, strlen(str1));
// 	printf("Comparison Result 1: %d\n", result1);
// 	int result2 = ft_memcmp(str1, str3, strlen(str1));
// 	printf("Comparison Result 2: %d\n", result2);
// return 0;
// }