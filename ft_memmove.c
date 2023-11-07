/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:40:46 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/07 10:25:45 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// static function for d < s
static void	ft_memmove_forward(unsigned char *d,
		const unsigned char *s, size_t n)
{
	while (n--)
	{
		*d++ = *s++;
	}
}
//static function for d > s

static void	ft_memmove_backward(unsigned char *d,
		const unsigned char *s, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*src;

	dest = d + n;
	src = s + n;
	while (n--)
	{
		*(--dest) = *(--src);
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *) src;
	if (d == s)
	{
		return (dest);
	}
	if (d < s)
	{
		ft_memmove_forward(d, s, n);
	}
	else
	{
		ft_memmove_backward(d, s, n);
	}
	return (dest);
}
/*int main() {
    char src[] = "This is a test string.";
    char dest[50];
    ft_memmove(dest, src, 5); 
    printf("Copied string: %s\n", dest);
    return 0;
}*/
// DESCRIPTION
// The memmove() function copies len bytes from string src to string dst.
// The two strings may overlap; the copy is always done in a non-destructive
// manner.

// RETURN VALUES
// The memmove() function returns the original value of dst.