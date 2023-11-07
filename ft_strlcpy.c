/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:44:04 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/07 13:48:24 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;

	src_len = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (src[src_len] && src_len < size - 1)
	{
		dest[src_len] = src[src_len];
		src_len++;
	}
	dest[src_len] = '\0';
	while (src[src_len])
	{
		src_len++;
	}
	return (src_len);
}
/*
int main() {
    char source[] = "This is a long string.";
    char destination[10];
    
    size_t copied = ft_strlcpy(destination, source, sizeof(destination));

    printf("Copied: %zu\n", copied);
    printf("Destination: %s\n", destination);

    return 0;
}*/
// DESCRIPTION
// strlcpy() and strlcat() take the full size of the destination buffer 
// and guar-antee NUL-termination if there is room.  Note that room for 
// the NUL should be included in dstsize.

// strlcpy() copies up to dstsize - 1 characters from the string src to dst, 
// NUL-terminating the result if dstsize is not 0.

// RETURN VALUES
// the strlcpy() and strlcat() functions return the total length of the
// string they tried to create.  For strlcpy() that means the length of src.