/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:27:36 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/04 11:46:44 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (lst == NULL || f == NULL)
		return ;
	current = lst;
	while (current != NULL)
	{
		f(current->content);
		current = current->next;
	}
}
// void custem_function(void *content)
// {
// 	printf("node content %s\n", (char *) content);
// }

// int main()
// {
// 	t_list	*node1 = (t_list *)malloc(sizeof(t_list));
// 	char	*data1 =(char *)malloc(10);
// 	strcpy(data1, "Hello");
// 	node1->content = data1;

// 	t_list	*node2 = (t_list *)malloc(sizeof(t_list));
// 	char	*data2 = (char *)malloc(10);
// 	strcpy(data2, "World");
// 	node2->content = data2;

// 	node1->next = node2;
// 	node2->next = NULL;

// 	t_list *list = node1;

// 	ft_lstiter(list, custem_function);
// 	return (0);
// }