/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:35:31 by ogoman            #+#    #+#             */
/*   Updated: 2023/10/24 16:07:39 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int main() {
    int char1 = 'A'; 
	int char2 = 128; 
    if (ft_isascii(char1)) {
        printf("char1 is an ASCII character.\n");
    } else {
        printf("char1 is not an ASCII character.\n");
    }

    if (ft_isascii(char2)) {
        printf("char2 is an ASCII character.\n");
    } else {
        printf("char2 is not an ASCII character.\n");
    }

    return 0;
}*/
