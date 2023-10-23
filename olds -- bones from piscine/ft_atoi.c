/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mman <mman@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:58:08 by mman              #+#    #+#             */
/*   Updated: 2023/09/27 00:22:27 by mman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	polarity;
	int	result;

	polarity = 1;
	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r')
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

// #include <stdio.h>

// int main() {
//     char input[] = "+-+++784c51"; // Example input string
//     int converted = ft_atoi(input);
//     printf("Converted integer: %d\n", converted);

//     return 0;
// }
