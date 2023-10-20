/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfraj <mfraj@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:12:26 by mfraj             #+#    #+#             */
/*   Updated: 2023/10/10 19:07:21 by mfraj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*memdest;

	if (!s)
		return (NULL);
	memdest = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (memdest == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		memdest[i] = f(i, s[i]);
		i++;
	}
	memdest[i] = '\0';
	return (memdest);
}
