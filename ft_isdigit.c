/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:10:16 by ogoman            #+#    #+#             */
/*   Updated: 2023/10/24 16:08:18 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
int main()
{
    int digit = 'a';
    int result = ft_isdigit(digit);
    if (result)
    {
        printf("%c is digit", digit);
    }
    else
    {
        printf("%c is not digit", digit);
    }
}*/
