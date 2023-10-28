/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 08:03:16 by ogoman            #+#    #+#             */
/*   Updated: 2023/10/27 10:17:45 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	new = (char *)ft_calloc(sizeof(*new), (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (*s1)
	{
		new[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		new[i] = *s2;
		i++;
		s2++;
	}
	return (new);
}
// int main()
// {
//     const char *s1 = "Hello, ";
//     const char *s2 = "World!";
//     char *result = ft_strjoin(s1, s2);

//     if (result)
//     {
//         printf("Result: %s\n", result);
//         free(result);
//     }
//     else
//     {
//         printf("Error: Memory allocation failed\n");
//     }

//     return (0);
// }
