/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:50:06 by ogoman            #+#    #+#             */
/*   Updated: 2023/10/27 15:46:03 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*substr;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[len] = '\0';
	return (substr);
}
// int main()
// {
//     char *original_string = "example.";
//     unsigned int start_index = 12;
//     size_t max_length = 6;

//     char *substring = ft_substr(original_string, start_index, max_length);

//     if (substring)
//     {
//         printf("substr: \"%s\"\n", substring);
//         free(substring);
//     }
//     else
//     {
//         printf("mistake.\n");
//     }

//     return (0);
// }