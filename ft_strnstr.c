/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:31:57 by ogoman            #+#    #+#             */
/*   Updated: 2023/10/27 12:13:48 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *arr, const char *some_part, size_t len)
{
	size_t	some_part_len;

	if (arr == 0 && len == 0)
	{
		return (0);
	}
	some_part_len = ft_strlen(some_part);
	if (some_part_len == 0)
	{
		return ((char *)arr);
	}
	while (*arr && len >= some_part_len)
	{
		if (*arr == *some_part
			&& ft_strncmp(arr, some_part, some_part_len) == 0)
		{
			return ((char *)arr);
		}
		arr++;
		len--;
	}
	return (NULL);
}
// int main()
// {
//     const char *arr = "This is a simple example";
//     const char *some_part = "simple";
//     size_t len = 20;

//     char *result = ft_strnstr(arr, some_part, len);

//     if (result)
//     {
//         printf("Found part at position: %ld\n", (long)(result - arr));
//     }
//     else
//     {
//         printf("Part not found in the arr.\n");
//     }
//     return 0;
// }