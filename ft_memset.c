/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 08:28:48 by ogoman            #+#    #+#             */
/*   Updated: 2023/10/26 14:01:32 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;
	unsigned char	val;
	size_t			i;

	p = ptr;
	i = 0;
	val = (unsigned char) value;
	while (i < num)
	{
		p[i] = val;
		i++;
	}
	return (ptr);
}
// int main() {
//     char buffer[20];
//     ft_memset(buffer, 'A', 10);
//     printf("Buffer after ft_memset: %s\n", buffer);
// 	return (0);
// }