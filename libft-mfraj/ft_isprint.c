/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfraj <mfraj@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:59:47 by mfraj             #+#    #+#             */
/*   Updated: 2023/10/16 21:24:00 by mfraj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int main(void)
// {
// 	printf("the result is %d\n", (ft_isprint(31)));
// 	printf("the result is %d\n", (ft_isprint(32)));
// 	printf("the result is %d\n", (ft_isprint('A')));
// 	printf("the result is %d\n", (ft_isprint('9')));
// }