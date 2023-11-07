/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:14:19 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/07 11:08:58 by ogoman           ###   ########.fr       */
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
/*int main() {
    const char *str = "This is a test string.";
    int ch = 's';

    char *result = ft_strchr(str, ch);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n",
				(char)ch, result - str);
    } else {
        printf("Character '%c' not found in the string.\n", (char)ch);
    }

    return 0;
}*/
// DESCRIPTION
// The strchr() function locates the first occurrence of c (converted to a char)
// in the string pointed to by s.  The terminating null character is 
// considered to be part of the string; therefore if c is `\0', 
// the functions locate the termi-nating `\0'.

// The strrchr() function is identical to strchr(), except it locates the last
// occurrence of c.

// RETURN VALUES
// The functions strchr() and strrchr() return a pointer
// to the located character, or NULL if the character does not 
// appear in the string.