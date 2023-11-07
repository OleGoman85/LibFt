/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:30:28 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/07 11:37:10 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_overflow(size_t count, size_t size)
{
	if (count == 0 || size == 0)
	{
		return (NULL);
	}
	if (size > SIZE_MAX / count)
	{
		return (NULL);
	}
	return ((void *)1);
}

static void	*ft_strcpy(char *dest, const char *src)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (!dest || !src)
	{
		return (NULL);
	}
	while (*s)
	{
		*d = *s;
		d++;
		s++;
	}
	*d = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*d;

	d = (char *)malloc(ft_strlen(s) + 1);
	if (!s)
	{
		return (NULL);
	}
	if (ft_overflow(1, ft_strlen(s) + 1) == NULL)
	{
		return (NULL);
	}
	if (!d)
	{
		return (NULL);
	}
	if (ft_strcpy(d, s) == NULL)
	{
		free(d);
		d = NULL;
		return (NULL);
	}
	return (d);
}
/*
int main() {
    const char *source = "Hello, World!";
    char *duplicate = ft_strdup(source);

    if (duplicate) {
        printf("Original: %s\n", source);
        printf("Duplicate: %s\n", duplicate);
        free(duplicate); // Free the memory when done
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/
// DESCRIPTION
// The strdup() function allocates sufficient memory for a copy 
// of the string s1, does the copy, and returns a pointer to it.
// The pointer may subsequently be used as an argument to
// the function free(3).

// If insufficient memory is available, NULL is returned and errno is set to
// ENOMEM.

// The strndup() function copies at most n characters from the string s1 always
// NUL terminating the copied string.