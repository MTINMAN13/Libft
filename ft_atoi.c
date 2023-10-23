/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <apple@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:25:06 by mman              #+#    #+#             */
/*   Updated: 2023/10/22 23:02:59 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// return The converted value or 0 on error.

int	ft_atoi(const char *str)
{
	int	i;
	int	polarity;
	int	result;

	polarity = 1;
	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			i++;
			polarity *= -1;
		}
		else if (str[i] == '+')
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - '0');
	result *= polarity;
	return (result);
}
