/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mman <mman@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:06:00 by mman              #+#    #+#             */
/*   Updated: 2023/09/21 19:27:37 by mman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// overwriting the terminating null byte ('\0') at the end of dest, and
// then adds a terminating null byte.
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// strncat(char *dest, const char *src, size_t n)
// {
// 	size_t dest_len = strlen(dest);
// 	size_t i;

// 	for (i = 0 ; i < n && src[i] != '\0' ; i++)
// 		dest[dest_len + i] = src[i];
// 	dest[dest_len + i] = '\0';

// 	return dest;
// }
