/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:21:45 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/07 15:56:34 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_is_in_str(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_is_in_str(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_is_in_str(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/*int main() 
{
    const char *s1 = "   \tHello, World!\n   ";
    const char *set = " \t\n";

    char *trimmed_str = ft_strtrim(s1, set);

    if (trimmed_str != NULL) {
        printf("part of string: \"%s\"\n", trimmed_str);
        free(trimmed_str); 
    } else {
        printf("mistake.\n");
    }

    return 0;
}*/

// Parameters
// s1:  The string to be trimmed.
// set:  The reference set of characters to trim.

// Return value
// The trimmed string.
// NULL if the allocation fails.

// External functs.
// malloc

// Description
// Allocates (with malloc(3)) and returns a copy of
// ’s1’ with the characters specified in ’set’ removed
// from the beginning and the end of the string.