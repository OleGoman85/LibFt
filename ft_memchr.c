/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:43:33 by ogoman            #+#    #+#             */
/*   Updated: 2023/10/25 16:26:11 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		uc;

	p = s;
	uc = (unsigned char)c;
	while (n--)
	{
		if (*p == uc)
		{
			return ((void *)p);
		}
		p++;
	}
	return (NULL);
}

// int main()
// {
//     char str[] = "This is an example string.";
//     char *result = (char *)ft_memchr(str, 'e', sizeof(str));

//     if (result)
//     {
//         printf("Found 'e' at position: %ld\n", (long)(result - str));
//     }
//     else
//     {
//         printf("'e' not found in the string.\n");
//     }

//     return 0;
// }
// privoditsja k void, potomu chto void* ft_memchr:
// Функция `memchr` ищет первое вхождение байта 
// со значением `c` в первых `n` байтах области памяти, 
// на которую указывает `s`. Если такой байт найден, 
// то функция возвращает УКАЗАТЕЛЬ на найденный байт. 
// Если байт не найден, то функция возвращает нулевой указатель (`NULL`).

// Этот код будет искать символ `'W'` в строке `"Hello, World!"`. 
// Если символ найден, он выведет его позицию в строке 
// (в данном случае, это будет 7, так как индексация начинается с 0). 
// Если символ не найден, он сообщит, что символ не был обнаружен.

// В данном контексте str всегда равно 0, так как оно 
// указывает на начало строки "Hello, World!". 
// str — это указатель на первый символ строки, 
// и его значение не меняется в ходе выполнения программы.

// result - str
// Это даст вам индекс найденного символа относительно начала строки str.