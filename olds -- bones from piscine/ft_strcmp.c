/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mman <mman@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:43:31 by mman              #+#    #+#             */
/*   Updated: 2023/09/24 11:47:54 by mman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	boolean;

	i = 0;
	boolean = 1;
	while (s1[i])
	{
		if (boolean == 1 && s1[i] == s2[i])
		{
			i++;
		}
		else if (boolean == 1 && s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}

// int main() {
//   char str1[] = "PICO VOLE", str2[] = "abCd", str3[] = "PICO VOLE";
//   int result;

//   // comparing strings str1 and str2
//   result = ft_strcmp(str1, str2);
//   printf("strcmp(str1, str2) = %d\n", result);

//   // comparing strings str1 and str3
//   result = ft_strcmp(str1, str3);
//   printf("strcmp(str1, str3) = %d\n", result);

//   return 0;
// }
