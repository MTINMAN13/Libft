/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfraj <mfraj@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:25:37 by mfraj             #+#    #+#             */
/*   Updated: 2023/10/16 20:11:29 by mfraj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_atoi(const char *str)
{
	int	c;
	int	s;
	int	res;

	c = 0;
	s = 1;
	res = 0;
	while (str[c] == ' ' || str[c] == '\n' || str[c] == '\t'
		|| str[c] == '\v' || str[c] == '\f' || str[c] == '\r')
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			s = -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (res * 10) + (str[c] - '0');
		c++;
	}
	return (res * s);
}

// int	main(void)
// {

// 	printf("%d\n", atoi("---1234ab567"));
// 	printf("%d\n", atoi("12s3334ab567"));
// 	printf("%d\n", atoi(" ---+--+1234ab567"));
// 	printf("%d\n", ft_atoi("---1234ab567"));
// 	printf("%d\n", ft_atoi("12s3334ab567"));
// 	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
// 	return (0);
// }
