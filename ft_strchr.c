/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:14:19 by ogoman            #+#    #+#             */
/*   Updated: 2023/10/31 15:45:07 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
// int main() {
//     const char *str = "This is a test string.";
//     int ch = 's';

//     char *result = ft_strchr(str, ch);

//     if (result != NULL) {
//         printf("Character '%c' found at position: %ld\n",
				// (char)ch, result - str);
//     } else {
//         printf("Character '%c' not found in the string.\n", (char)ch);
//     }

//     return 0;
// }