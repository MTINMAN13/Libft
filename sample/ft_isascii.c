/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfraj <mfraj@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:56:45 by mfraj             #+#    #+#             */
/*   Updated: 2023/10/16 21:18:11 by mfraj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}

// int main(void)
// {
// 	printf("the result is %d\n", (ft_isascii('a')));
// 	printf("the result is %d\n", (ft_isascii('B')));
// 	printf("the result is %d\n", (ft_isascii('1')));
// 	printf("the result is %d\n", (ft_isascii('*')));
// 	printf("the result is %d\n", (ft_isascii(u'&')));
// 	printf("the result is %d\n", (ft_isascii(u'Č')));
// 	printf("the result is %d\n", (ft_isascii(u'=')));
// }