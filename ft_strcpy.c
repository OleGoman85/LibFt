/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:23:32 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/07 11:22:26 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strcpy(char *dest, const char *src)
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
/*int main()
{
	char source[] = "Hello, world!";
	char destination[strlen(source)+1];

	ft_strcpy(destination, source);

	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);

	return 0;
}*/
// DESCRIPTION
// The stpcpy() and strcpy() functions copy the string src to dst (including the
// terminating `\0' character.)

// The stpncpy() and strncpy() functions copy at most len 
// characters from src into dst.  If src is less than len characters long,
// the remainder of dst is filled with `\0' characters.  Otherwise, 
// dst is not terminated.

// The source and destination strings should not overlap, 
// as the behavior is unde-fined.

// RETURN VALUES
// The strcpy() and strncpy() functions return dst.  The stpcpy() and stpncpy()
// functions return a pointer to the terminating `\0' character of dst.  If
// stpncpy() does not terminate dst with a NUL character, it instead returns a
// pointer to dst[n] (which does not necessarily refer to a valid memory loca-
// tion.)