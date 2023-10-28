/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 08:21:06 by ogoman            #+#    #+#             */
/*   Updated: 2023/10/26 15:12:49 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	total;
	size_t	original;

	if (dst == 0 && size == 0)
		return (0);
	original = size;
	total = ft_strlen(dst) + ft_strlen(src);
	while (*dst != 0 && size > 0)
	{
		dst++;
		size--;
	}
	if (size == 0)
		return (ft_strlen(src) + original);
	while (*src != 0 && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	*dst = 0;
	return (total);
	return (0);
}
/*
int main()
{
    char destination[20] = "Hello, ";
    const char *source = "World!";
    size_t destination_size = sizeof(destination);

    size_t result = ft_strlcat(destination, source, destination_size);

    printf("Resulting string: %s\n", destination);
    printf("Total length: %zu\n", result);

    return 0;
}*/
