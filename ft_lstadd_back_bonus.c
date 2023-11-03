/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:44:21 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/03 15:45:59 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		current = *lst;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
}

// t_list *ft_lstlast(t_list *lst)
// {
// 	if (lst == NULL)
// 		return NULL;

// 	while (lst->next != NULL)
// 	{
// 		lst = lst->next;
// 	}

// 	return lst;
// }

// int main()
// {
// 	t_list *head = NULL;

// 	for (int i = 1; i <= 5; i++)
// 	{
// 		t_list *new_node = (t_list *)malloc(sizeof(t_list));
// 		new_node->content = (void *)(intptr_t)i;
// 		new_node->next = NULL;
// 		ft_lstadd_back(&head, new_node);
// 	}

// 	t_list *last_node = ft_lstlast(head);

// 	if (last_node != NULL)
// 	{
// 		int last_data = (int)(intptr_t)last_node->content;
// 		printf("node content is: %d\n", last_data);
// 	}
// 	else
// 		printf("list empty.\n");
// 	while (head)
// 	{
// 		t_list *temp = head;
// 		head = head->next;
// 		free(temp);
// 	}
// 	return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct s_list
// {
// 	void *content;
// 	struct s_list *next;
// } t_list;