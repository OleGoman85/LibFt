/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:39:14 by ogoman            #+#    #+#             */
/*   Updated: 2023/10/24 16:06:57 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
int main()
 {
     char alpha = '1';
     int result = ft_isalpha(alpha);
     if (result)
     {
         printf("%c is alpha", alpha);
     }
     else
     {
         printf("%c is not alpha", alpha);
     }
 }*/
