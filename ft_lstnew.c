/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:13:43 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/01 16:17:29 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
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
