/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:09:32 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/06 16:36:54 by ogoman           ###   ########.fr       */
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