/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:52:58 by ogoman            #+#    #+#             */
/*   Updated: 2023/10/27 10:41:31 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int	main()
{
	char	symbol;

	symbol = 'a';
	if (ft_isprint(symbol))
	{
		printf("%c - this is printable.\n", symbol);
	}
	else
	{
		printf("%c - this is not printable.\n", symbol);
	}
	return (0);
}*/
