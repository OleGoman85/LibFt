/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 08:06:03 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/04 11:05:36 by ogoman           ###   ########.fr       */
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

// #include <stdio.h>
// #include <stdlib.h>

// typedef struct s_list {
//     void *content;
//     struct s_list *next;
// } t_list;

// void ft_lstdelone(t_list *lst, void (*del)(void *)) {
//     if (lst == NULL || del == NULL)
//         return;

//     del(lst->content);
//     free(lst);
// }

// void del(void *content) 
// {
//     free(content);
// }

// int main() 
// {
//     t_list *node = (t_list *)malloc(sizeof(t_list));
//     char *data = (char *)malloc(10); 
//     strcpy(data, "Hello");
//     node->content = data;
//     node->next = NULL;

//     ft_lstdelone(node, del);

//     if (node == NULL) {
//         printf("Node deleted.\n");
//     } else {
//         printf("node not deleted.\n");
//     }

//     return 0;
// }
