/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:53:39 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/01 13:13:44 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	separator;

	count = 0;
	separator = 0;
	while (*s)
	{
		if (*s != c && separator == 0)
		{
			separator = 1;
			count++;
		}
		else if (*s == c)
			separator = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

// int main()
// {
//     char *str = "split:asd:wer";
//     char **split = ft_split(str, ':');

//     if (split)
//     {
//         int i = 0;
//         while (split[i])
//         {
//             printf("Word %d: %s\n", i, split[i]);
//             free(split[i]);
//             i++;
//         }
//         free(split);
//     }
//     else
//     {
//         printf("ft_split returned NULL\n");
//     }

//     return 0;
// }