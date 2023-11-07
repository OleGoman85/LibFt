/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:39:14 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/07 10:29:01 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
//  RETURN VALUES
//      The isalpha() function returns zero if the character
//      tests false and returns non-zero if the character tests true.
