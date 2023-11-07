/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:32:08 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/07 11:40:34 by ogoman           ###   ########.fr       */
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

/*void print_char_index(unsigned int index, char *character) 
{
    printf("Character at index %u is %c\n", index, *character);
}

int main() {
    char str[] = "Hello, World!";

    ft_striteri(str, &print_char_index);

    return 0;
}*/
// Parameters
// s:  The string on which to iterate.
// f:  The function to apply to each character.

// Description
// Applies the function ’f’ on each character of
// the string passed as argument, passing its index
// as first argument.  Each character is passed by
// address to ’f’ to be modified if necessary.
