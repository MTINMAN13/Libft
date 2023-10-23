/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mman <mman@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 23:28:05 by mman              #+#    #+#             */
/*   Updated: 2023/09/23 12:50:02 by mman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	i;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main()
// {
// 	char a[50] = "hezkyyyy ryby";
// 	char b[20] = "yyy";

// 	char *bro = ft_strstr(a, b);
// 	printf(bro);
// 	return(0);
// }
