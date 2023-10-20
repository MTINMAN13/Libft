/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfraj <mfraj@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:28:29 by mfraj             #+#    #+#             */
/*   Updated: 2023/10/16 21:15:08 by mfraj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}

// int main(void)
// {
// 	printf("the result is %d\n", (ft_isalpha('T')));
// 	printf("the result is %d\n", (ft_isalpha('n')));
// 	printf("the result is %d\n", (ft_isalpha('7')));
// }