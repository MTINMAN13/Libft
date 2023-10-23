/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mman <mman@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:23:32 by mman              #+#    #+#             */
/*   Updated: 2023/09/24 11:48:02 by mman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && n > i + 1)
		i++;
	if (i == n || (s1[i] == '\0' && s2[i] == '\0'))
		return (0);
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// int main ()
// {
//   char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
//   int n;
//   puts ("Looking for R2 astromech droids...");
//   for (n=0 ; n<3 ; n++)
//     if (ft_strncmp (str[n],"R2xx",2) == 0)
//     {
//       printf ("found %s\n",str[n]);
//     }
//   return 0;
// }
