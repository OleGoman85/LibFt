/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:26:31 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/08 07:46:41 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*int main() 
{
    t_list *myList = NULL;

    ft_lstadd_front(&myList, ft_lstnew("Node 1"));
    ft_lstadd_front(&myList, ft_lstnew("Node 2"));
    ft_lstadd_front(&myList, ft_lstnew("Node 3"));

    t_list *current = myList;
    while (current) 
	{
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    while (myList) 
	{
        t_list *temp = myList;
        myList = myList->next;
        free(temp);
    }

    return 0;
}*/
// Parameters
// lst:  The address of a pointer to the first link of
// a list.
// new:  The address of a pointer to the node to be
// added to the list.