/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfraj <mfraj@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:59:36 by mfraj             #+#    #+#             */
/*   Updated: 2023/10/17 18:33:06 by mfraj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int n)
{
	int	len;

	len = 0;
	if (n < 1)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*string_alloc(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

static long long	absnum(long long n)
{
	long long	num;

	num = 1;
	if (n < 0)
		num *= -n;
	else
		num *= n;
	return (num);
}

char	*ft_itoa(int n)
{
	char			*string;
	unsigned int	num;
	int				sign;
	int				length;

	sign = 0;
	if (n < 0)
		sign = 1;
	length = get_len(n);
	string = string_alloc(length);
	if (!string)
		return (NULL);
	*(string + length) = '\0';
	num = absnum(n);
	while (length--)
	{
		*(string + length) = 48 + num % 10;
		num = num / 10;
	}
	if (sign)
		*(string) = '-';
	return (string);
}
