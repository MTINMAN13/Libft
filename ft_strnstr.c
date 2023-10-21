/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mman <mman@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:41:29 by mman              #+#    #+#             */
/*   Updated: 2023/10/21 17:04:06 by mman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

// locates first occurrence of null terminated string little in string big
// where no more than len characters are searched (not searched after a '\0')

// if little is empty string, big is returned
// if little occurs nowhere in big, NULL is returned
// otherwise pointer to the first char of first occured little is returned

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	slen;
	
}


int	main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;

	ptr = strnstr(largestring, smallstring, 4);
}
