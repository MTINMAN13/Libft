/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <apple@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:06:25 by mfraj             #+#    #+#             */
/*   Updated: 2023/10/22 01:23:20 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// allocates storage space for an array of number
// elements, each of length size bytes

void	*ft_calloc(size_t count, size_t size)
{
	void	*mm;
	size_t	total_size;

	if (count == 0 || size == 0)
	{
		mm = malloc(0);
		return (mm);
	}
	total_size = count * size;
	if (total_size / count != size)
		return (NULL);
	mm = malloc(total_size);
	if (!mm)
		return (NULL);
	ft_bzero(mm, total_size);
	return (mm);
}

// int main()
// {
//     // This pointer will hold the
//     // base address of the block created
//     int* ptr;
//  	int* ptr2;
//     int n, i, j;
//     // Get the number of elements for the array
//     n = 5;
//     printf("Enter number of elements: %d\n", n);
//     // Dynamically allocate memory using calloc()
//     ptr = (int*)calloc(n, sizeof(int));
//  	ptr2 = (int*)ft_calloc(n, sizeof(int));
//     // Check if the memory has been successfully
//     // allocated by calloc or not
//     if ((ptr == NULL) || (ptr2 == NULL)) {
//         printf("Memory not allocated.\n");
//         exit(0);
//     }
//     else {
//         // Memory has been successfully allocated
//         printf("Memory successfully allocated using calloc.\n");
//         // Get the elements of the array
//         for (i = 0; i < n; ++i) {
//             ptr[i] = i + 1;
//         }
//         // Print the elements of the array
//         printf("The elements of the calloc array are: ");
//         for (i = 0; i < n; ++i) {
//             printf("%d, ", ptr[i]);
//         }
//      // Get the elements of the array
//         for (j = 0; j < n; ++j) {
//             ptr2[j] = j + 1;
//         }
//         // Print the elements of the array
//         printf("\nThe elements of the ft_calloc array are: ");
//         for (j = 0; j < n; ++j) {
//             printf("%d, ", ptr2[j]);
//         }
//     }
//     return 0;
// }
