/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:28:17 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/07 15:41:45 by ogoman           ###   ########.fr       */
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

// DESCRIPTION
// The strrchr() function is identical to strchr(), except it locates the last
// occurrence of c.
// RETURN VALUES
// The functions strchr() and strrchr() return a pointer to the located
// character, or NULL if the character does not appear in the string.
