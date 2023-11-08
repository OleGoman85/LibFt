/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 09:09:16 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/08 08:33:25 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (lst == NULL || del == NULL)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}

/*void custom_delete(void *content) 
{
    free(content);
}

int main() {
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    char *data1 = (char *)malloc(10);
    strcpy(data1, "Hello");
    node1->content = data1;

    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    char *data2 = (char *)malloc(10);
    strcpy(data2, "World");
    node2->content = data2;

    node1->next = node2;
    node2->next = NULL;

    t_list *list = node1;

    ft_lstclear(&list, custom_delete);

    if (list == NULL) {
        printf("node deleted.\n");
    } else {
        printf("node not deleted.\n");
    }

    return 0;
}*/
// Parameters
// lst:  The address of a pointer to a node.
// del:  The address of the function used to delete
// the content of the node.

// Description
// Deletes and frees the given node and every
// successor of that node, using the function ’del’
// and free(3).
// Finally, the pointer to the list must be set to
// NULL.
