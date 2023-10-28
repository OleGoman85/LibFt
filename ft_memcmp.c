/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:09:32 by ogoman            #+#    #+#             */
/*   Updated: 2023/10/25 16:23:18 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n--)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		p1++;
		p2++;
	}
	return (0);
}
// int main()
// {
//     char str1[] = "Hello, World!";
//     char str2[] = "Hello, Universe!";

//     // Сравниваем первые 7 байт строк str1 и str2
//     int result = ft_memcmp(str1, str2, 7);

//     if (result == 0)
//     {
//         printf("The first 7 bytes of str1 and str2 are equal.\n");
//     }
//     else if (result < 0)
//     {
//         printf("str1 is less than str2.\n");
//     }
//     else
//     {
//         printf("str1 is greater than str2.\n");
//     }

//     return 0;
// }
// Функция `memcmp` сравнивает два блока данных, 
// на которые указывают `s1` и `s2`, каждый длиной `n` байтов.
// Она сравнивает каждый байт в обоих блоках, начиная с первого, и возвращает:

// - 0, если блоки данных считаются идентичными.
// - Значение больше 0, если первое несовпадение в `s1` больше, чем в `s2`.
// - Значение меньше 0, если первое несовпадение в `s1` меньше, чем в `s2`.

// Эта функция полезна, когда вам нужно сравнивать два блока данных, 
// например, при поиске вхождений или сортировке.