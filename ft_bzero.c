/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:03:39 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/07 08:37:21 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
int main()
{
	char buffer[10];
	ft_bzero(buffer, sizeof(buffer));
	printf("Buffer after bzero: \"%s\"\n", buffer);
	return(0);
}*/
// DESCRIPTION
//  The bzero() function writes n zeroed bytes to the string s.
//  If n is zero, bzero() does nothing.
