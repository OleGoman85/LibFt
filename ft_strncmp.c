/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:18:41 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/07 14:53:18 by ogoman           ###   ########.fr       */
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
/*int main()
{
    const char *str1 = "Hello, sorld!";
    const char *str2 = "Hello, World!";
    const char *str3 = "Hello, there!";
    size_t n = 13;

    int result1 = ft_strncmp(str1, str2, n);
    int result2 = ft_strncmp(str1, str3, n);

    printf("Comparison 1: %d\n", result1);
    printf("Comparison 2: %d\n", result2);

    return 0;
}*/
// DESCRIPTION
// The strcmp() and strncmp() functions lexicographically compare
// the null-termi-nated strings s1 and s2.

// The strncmp() function compares not more than n characters.
// Because strncmp() is designed for comparing strings rather than binary data,
// characters that appear after a `\0' character are not compared.

// RETURN VALUES
// The strcmp() and strncmp() functions return an integer greater than,
// equal to, or less than 0, according as the string s1 is greater than,
// equal to, or less than the string s2.
// The comparison is done using unsigned characters,
// so that `\200' is greater than `\0'.