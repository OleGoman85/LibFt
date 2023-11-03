/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:26:31 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/03 11:37:07 by ogoman           ###   ########.fr       */
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

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*node;

// 	node = (t_list *)malloc(sizeof(t_list));
// 	if (!node)
// 	{
// 		return (NULL);
// 	}
// 	node->content = content;
// 	node->next = NULL;
// 	return (node);
// }

// int main() 
// {
//     t_list *myList = NULL;

//     ft_lstadd_front(&myList, ft_lstnew("Node 1"));
//     ft_lstadd_front(&myList, ft_lstnew("Node 2"));
//     ft_lstadd_front(&myList, ft_lstnew("Node 3"));

//     t_list *current = myList;
//     while (current) 
// 	{
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }

//     while (myList) 
// 	{
//         t_list *temp = myList;
//         myList = myList->next;
//         free(temp);
//     }

//     return 0;
// }