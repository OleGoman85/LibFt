/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:43:33 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/07 10:27:22 by ogoman           ###   ########.fr       */
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

/*int main()
{
    char str[] = "This is an example string.";
    char *result = (char *)ft_memchr(str, 'e', sizeof(str));

    if (result)
    {
        printf("Found 'e' at position: %ld\n", (long)(result - str));
    }
    else
    {
        printf("'e' not found in the string.\n");
    }

    return 0;
}*/
// DESCRIPTION
//      The memchr() function locates the first occurrence of c (converted to an
//      unsigned char) in string s.

// RETURN VALUES
//      The memchr() function returns a pointer to the byte located, or NULL if
//      no such byte exists within n bytes.