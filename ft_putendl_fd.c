/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 07:49:38 by ogoman            #+#    #+#             */
/*   Updated: 2023/10/31 07:58:53 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	newline;

	if (s == 0 || fd == 0)
	{
		return ;
	}
	if (*s)
	{
		newline = '\n';
		while (*s != 0)
		{
			write(fd, s, 1);
			s++;
		}
		write(fd, &newline, 1);
	}
}

// void ft_putendl_fd(char *s, int fd);

// int main() {
//     char *message = "Hello";
//     int fd = 1;

//     ft_putendl_fd(message, fd);

//     return 0;
// }