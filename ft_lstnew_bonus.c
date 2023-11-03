/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:13:43 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/03 13:09:59 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
	{
		return (NULL);
	}
	node->content = content;
	node->next = NULL;
	return (node);
}

// int main()
// {
// 	int data = 42;
// 	t_list *new_node = ft_lstnew(&data);
// 	if (new_node)
// 	{
// 		// Successfully created a new node

// 		// Access and print the content
// 		int *content_ptr = (int *)new_node->content;
// 		printf("Content: %d\n", *content_ptr);

// 		// Clean up by freeing the allocated memory
// 		free(new_node);
// 	}
// 	else
// 	{
// 		// Handle the error: failed to allocate memory
// 		printf("Failed to create a new node.\n");
// 	}

// 	return 0;
// }
