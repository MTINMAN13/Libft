/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfraj <mfraj@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:24:25 by mfraj             #+#    #+#             */
/*   Updated: 2023/10/17 19:54:40 by mfraj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>
// move parts of one string to another

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int	i;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		i = (int)len - 1;
		while (i >= 0)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char *)(dest + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dest);
}

// int main()
// {
// 	char str1[] = "Hello, World!";
// 	char str2[30];

// 	ft_memmove(str1 + 7, str1 + 1, 7);
// 	printf("Original String: %s\n", "Hello, World!");
// 	printf("After ft_memmove: %s\n", str1 + 7);
// 	ft_memmove(str2, "Goodbye", 7);
// 	printf("Copied String: %s\n", str2);
// 	return 0;
// }