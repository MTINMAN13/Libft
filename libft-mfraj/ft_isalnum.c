/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfraj <mfraj@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:47:37 by mfraj             #+#    #+#             */
/*   Updated: 2023/10/16 21:14:57 by mfraj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}

// int	main(void)
// {
// 	printf("the result is %d\n", (ft_isalnum('6')));
// 	printf("the result is %d\n", (ft_isalnum('t')));
// 	printf("the result is %d\n", (ft_isalnum('-')));
// }