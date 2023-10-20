/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfraj <mfraj@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:42:03 by mfraj             #+#    #+#             */
/*   Updated: 2023/10/12 20:20:36 by mfraj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*jointstr;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	jointstr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!jointstr)
		return (NULL);
	while (s1[i])
	{
		jointstr[i] = s1[i];
		i++;
	}
	while (s2[j])
		jointstr[i++] = s2[j++];
	jointstr[i] = '\0';
	return (jointstr);
}

// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i])
// 		i++;
// 	return (i);
// }

// int main()
// {
// 	char const *str1 = "This string ";
// 	char const *str2 = "is the best thing!";

// 	printf("%s\n", ft_strjoin(str1, str2));
// }