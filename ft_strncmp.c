/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:18:41 by ogoman            #+#    #+#             */
/*   Updated: 2023/10/26 15:31:54 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && (*s1 || *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
// int main()
// {
//     const char *str1 = "Hello, sorld!";
//     const char *str2 = "Hello, World!";
//     const char *str3 = "Hello, there!";
//     size_t n = 13; // Максимальное количество символов для сравнения

//     int result1 = ft_strncmp(str1, str2, n);
//     int result2 = ft_strncmp(str1, str3, n);

//     printf("Comparison 1: %d\n", result1);
//     printf("Comparison 2: %d\n", result2);

//     return 0;
// }

// Функция `strncmp` в стандартной библиотеке C
//  используется для сравнения двух строк
// (массивов символов) с ограничением на
// максимальное количество символов, которое
// будет проверено. Она сравнивает символы в
// двух строках и определяет, равны ли они, и возвращает результат сравнения.
// Функция `strncmp` возвращает:
// - `0`, если первая строка `s1` и вторая строка `s2` 
// совпадают в первых `n` символах.
// - Значение `< 0`, если первая строка `s1` меньше второй строки `s2` 
// (в лексикографическом порядке) на первых `n` символах.
// - Значение `> 0`, если первая строка `s1` больше второй строки `s2` 
// (в лексикографическом порядке) на первых `n` символах.