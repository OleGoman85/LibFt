/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:07:08 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/08 08:14:45 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*int main() 
{
    t_list *head = NULL;
    for (int i = 1; i <= 5; i++) {
        t_list *new_node = (t_list *)malloc(sizeof(t_list));
        new_node->content = (void *)(intptr_t)i;
        new_node->next = head;
        head = new_node;
    }

    t_list *last_node = ft_lstlast(head);

    while (head) {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }
    return 0;
}*/

// Description
// Returns the last node of the list.