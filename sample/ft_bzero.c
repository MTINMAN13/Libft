/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfraj <mfraj@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:10:45 by mfraj             #+#    #+#             */
/*   Updated: 2023/10/16 20:26:08 by mfraj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// Sets bytes in a memory block to '0'

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n-- > 0)
	{
		*ptr++ = '\0';
	}
}

// int	main()
// {
//     char str[] = "Hello, World!";
//     size_t len = sizeof(str) - 1;
//     printf("Original String: %s\n", str);
//     ft_bzero(str, len);
//     printf("Modified String: %s\n", str);
//     return 0;
// }