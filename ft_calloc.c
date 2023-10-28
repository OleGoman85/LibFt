/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 08:47:34 by ogoman            #+#    #+#             */
/*   Updated: 2023/10/26 16:20:36 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_overflow(size_t count, size_t size)
{
	if (count == 0 || size == 0)
	{
		return (NULL);
	}
	if (size > SIZE_MAX / count)
	{
		return (NULL);
	}
	return ((void *)1);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	ft_overflow(count, size);
	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr)
	{
		ft_memset(ptr, 0, total_size);
	}
	else
	{
		return (NULL);
	}
	return (ptr);
}

// int main()
// {
// 	size_t num_elements = 5;
// 	size_t element_size = sizeof(int);

// 	int *array = (int *)ft_calloc(num_elements, element_size);

// 	if (array)
// 	{
// 		for (size_t i = 0; i < num_elements; i++)
// 		{
// 			printf("array[%zu] = %d\n", i, array[i]);
// 		}

// 		free(array); // Освобождаем память после использования
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}

// 	return 0;
// }

// Функция calloc (от "contiguous allocation") выделяет блок памяти
// под массив, состоящий из count элементов, 
// каждый размером size байтов. 
// Функция инициализирует все байты в выделенной памяти нулевыми значениями.