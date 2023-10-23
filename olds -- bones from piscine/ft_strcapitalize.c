/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mman <mman@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 23:27:54 by mman              #+#    #+#             */
/*   Updated: 2023/09/24 07:49:58 by mman             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	firstletter;

	i = 0;
	firstletter = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (firstletter == 1 && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!firstletter && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			firstletter = 0;
		}
		else
			firstletter = 1;
		i++;
	}
	return (str);
}
// int	ft_isletter(char str)
// {
// 	if ((str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= 'a' && str[0] <= 'z'))
// 		return (1);
// 	return (0);
// }

// // int	ft_isnumberorspace(char str)
// // {
// // 	if ((str[0] >= '0' && str[0] <= '9') || str[0] == ' ')
// // 		return (1);
// // 	return (0);
// // }

// // char	*ft_strcapitalize(char *str)
// // {
// // 	int	newword;
// // 	unsigned int	i;

// // 	newword = 1;
// // 	i = 0;
// // 	while (str[i])
// // 	{
// // 		if (newword == 1)
// // 			{
// // 				if (ft_isletter(str[i]) == 1)
// // 					if (str[i] >= 'a' && str[i] <= 'z')
// // 						str[i] -= 32;
// // 				newword = 0;
// // 			}
// // 		while (newword == 0)
// // 		{
// // 			if (ft_isnumberorspace(str[i]) == 1)
// // 				newword = 1;
// // 			if (str[i] >= 'A' && str[i] <= 'Z')
// // 						str[i] += 32;
// // 		}
// // 		i++;
// // 	}
// // 	return (str);
// // }

// #include <stdio.h>
// int main() {
//     char wat[] = "hEllooo  salut, comment tu vas ?
// 42mots quarante-deux; cinquante+et+un";
//     char *was;

//     was = ft_strcapitalize(wat);
//     printf("%s\n", was);

//     return 0;
// }
