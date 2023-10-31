/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:04:59 by ogoman            #+#    #+#             */
/*   Updated: 2023/10/28 13:36:10 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (s == 0 || f == 0)
		return (NULL);
	str = ft_strdup(s);
	if (str == 0)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}

/* char my_func(unsigned int index, char c)
{
    if (index % 2 == 0)
    {
        if (c >= 'a' && c <= 'z')
            return c - 32;
    }
    else
    {
        return c;
    }
}

int main() {
    char *input_str = "Hello, World!";
    char *result_str = ft_strmapi(input_str, my_func);

    if (result_str != NULL) {
        printf("Original String: %s\n", input_str);
        printf("Modified String: %s\n", result_str);
        free(result_str);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/