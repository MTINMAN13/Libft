/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <apple@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:15:56 by mman              #+#    #+#             */
/*   Updated: 2023/10/22 22:21:08 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

// whether c is a 7-bit unsigned char value that  fits  into ASCII characte

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}

// int	main(void)
// {
// 	char whatever = 'ř';
// 	int	stuff = ft_isascii(whatever);
// 	printf("isascii for %c;  %d", whatever, stuff);
// 	return (0);
// }
