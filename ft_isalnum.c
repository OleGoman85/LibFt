/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:21:51 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/07 08:49:34 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		|| (c >= '0' && c <= '9'));
}
// DESCRIPTION
//  The isalnum() function tests for any character for which 
// 	isalpha(3) or isdigit(3) is true.  The value of the 
// 	 argument must be representable as an unsigned char or the
//      value of EOF.

//      In the ASCII character set, this includes the following
// 	 characters (preceded by their numeric values, in octal):

// RETURN VALUES
//      The isalnum() function returns zero if the character 
// 	 tests false and returns non-zeroif the character tests true.
