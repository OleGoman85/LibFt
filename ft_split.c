/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:53:39 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/09 12:25:02 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			count++;
			while (*s != c && *s != '\0')
				s++;
		}
	}
	return (count);
}

static char	*word_copy(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	word = NULL;
	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	finish;
	size_t	word;
	int		start;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!s || !split)
		return (NULL);
	finish = 0;
	word = 0;
	start = -1;
	while (finish <= ft_strlen(s))
	{
		if (s[finish] != c && start < 0)
			start = finish;
		else if ((s[finish] == c || finish == ft_strlen(s)) && start >= 0)
		{
			split[word++] = word_copy(s, start, finish);
			start = -1;
		}
		finish++;
	}
	split[word] = 0;
	return (split);
}

/*int main()
{
	char *str = "split:asd:wer";
	char **split = ft_split(str, ':');

	if (split)
	{
		int i = 0;
		while (split[i])
		{
			printf("Word %d: %s\n", i, split[i]);
			free(split[i]);
			i++;
		}
		free(split);
		split = NULL;
	}
	else
	{
		printf("ft_split returned NULL\n");
	}

	return 0;
}*/