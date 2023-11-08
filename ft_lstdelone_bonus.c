/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 08:06:03 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/08 08:33:01 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/*int main() 
{
    t_list *node = (t_list *)malloc(sizeof(t_list));
    char *data = (char *)malloc(10); 
    strcpy(data, "Hello");
    node->content = data;
    node->next = NULL;

    ft_lstdelone(node, del);

    if (node == NULL) {
        printf("Node deleted.\n");
    } else {
        printf("node not deleted.\n");
    }
    return 0;
}*/
// Parameters
// lst:  The node to free.
// del:  The address of the function used to delete
// the content.

// Description
// Takes as a parameter a node and frees the memory of
// the node’s content using the function ’del’ given
// as a parameter and free the node.  The memory of
// ’next’ must not be freed.