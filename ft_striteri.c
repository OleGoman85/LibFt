/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:32:08 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/01 11:04:54 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// void print_char_index(unsigned int index, char *character) 
// {
//     printf("Character at index %u is %c\n", index, *character);
// }

// int main() {
//     char str[] = "Hello, World!";

//     ft_striteri(str, &print_char_index);

//     return 0;
// }