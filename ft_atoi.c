/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <apple@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:25:06 by mman              #+#    #+#             */
/*   Updated: 2023/10/24 15:21:08 by apple            ###   ########.fr       */
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
	if (str[i] == '-')
	{
		i++;
		polarity *= -1;
	}
	else if (str[i] == '+')
		i++;
	if (str[i] == '+' || str[i] == '-')
		return (result);
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - '0');
	result *= polarity;
	return (result);
}
