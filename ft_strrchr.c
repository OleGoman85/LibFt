/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:28:17 by ogoman            #+#    #+#             */
/*   Updated: 2023/10/31 15:55:48 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	result = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			result = (char *)s;
		}
		s++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)s);
	}
	return (result);
}

// int main()
// {
//     char arr[] = "helloa world";
//     char symb = 'o';
//     char *i = ft_strrchr(arr, symb);

//     if (i != NULL)
//     {
//         printf("%s\n", i);
//     }
//     else
//     {
//         printf("Symbol not found.\n");
//     }

//     return 0;
// }
