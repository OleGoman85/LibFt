/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:02:25 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/06 10:14:14 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	del(void *content)
{
	if (content != NULL)
	{
		free(content);
	}
}

void	mem_clear(t_list **lst, void (*del)(void *))
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

t_list	*create_node(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
	{
		del(new_node);
		return (NULL);
	}
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

void	add_node_to_end(t_list **list, t_list *new_node)
{
	t_list	*current;

	if (*list == NULL)
	{
		*list = new_node;
	}
	else
	{
		current = *list;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	void	*new_content;
	t_list	*new_node;

	new_list = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		if (new_content == NULL)
		{
			del(new_content);
			mem_clear(&new_list, del);
			return (NULL);
		}
		new_node = create_node(new_content);
		if (new_node == NULL)
		{
			mem_clear(&new_list, del);
			return (NULL);
		}
		add_node_to_end(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// void *custom_function(void *content)
// {
// 	char *original = (char *)content;
// 	char *new_content = (char *)malloc(strlen(original) + 1);
// 	for (int i = 0; original[i]; i++)
// 	{
// 		new_content[i] = toupper(original[i]);
// 	}
// 	new_content[strlen(original)] = '\0';
// 	return new_content;
// }

// void custom_delete(void *content)
// {
// 	free(content);
// }

// int main()
// {

// 	t_list *node1 = (t_list *)malloc(sizeof(t_list));
// 	char *data1 = (char *)malloc(10);
// 	strcpy(data1, "Hello");
// 	node1->content = data1;

// 	t_list *node2 = (t_list *)malloc(sizeof(t_list));
// 	char *data2 = (char *)malloc(10);
// 	strcpy(data2, "World");
// 	node2->content = data2;

// 	node1->next = node2;
// 	node2->next = NULL;

// 	t_list *list = node1;

// 	t_list *new_list = ft_lstmap(list, custom_function, custom_delete);

// 	t_list *current = new_list;
// 	while (current != NULL)
// 	{
// 		printf("Node content: %s\n", (char *)current->content);
// 		current = current->next;
// 	}
// 	mem_clear(&new_list, custom_delete);

// 	mem_clear(&list, custom_delete);

// 	return 0;
// }