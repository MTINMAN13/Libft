/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfraj <mfraj@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:31:19 by mfraj             #+#    #+#             */
/*   Updated: 2023/10/16 21:20:07 by mfraj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int main(void)
// {
// 	printf("the result is %d\n", (ft_isdigit('9')));
// 	printf("the result is %d\n", (ft_isdigit('+')));
// 	printf("the result is %d\n", (ft_isdigit('-')));
// 	printf("the result is %d\n", (ft_isdigit('a')));
// }