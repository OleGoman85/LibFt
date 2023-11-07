/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:26:21 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/07 10:23:13 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*p;
	char	*s;

	if (dst == NULL && src == NULL)
	{
		return (0);
	}
	p = (char *) dst;
	s = (char *) src;
	i = 0;
	while (i < n)
	{
		p[i] = s[i];
		i++;
	}
	return (dst);
}
/*
int main()
{
	char src[10] = "Hello";
	char dest[10];
	ft_memcpy(dest, src, 5);
	printf("copied string %s\n", dest);

	return(0);
}*/
// DESCRIPTION
// The memcpy() function copies n bytes from memory area src to memory area
// dst.  If dst and src overlap, behavior is undefined.  Applications in
// which dst and src might overlap should use memmove(3) instead.

// RETURN VALUES
// The memcpy() function returns the original value of dst.
