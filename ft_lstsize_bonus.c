/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogoman <ogoman@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:40:13 by ogoman            #+#    #+#             */
/*   Updated: 2023/11/08 07:54:12 by ogoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*int main() {
    t_list *head = NULL;
    for (int i = 1; i <= 5; i++) {
        t_list *new_node = (t_list *)malloc(sizeof(t_list));
        new_node->content = (void *)(intptr_t)i;
        new_node->next = head;
        head = new_node;
    }

    int size = ft_lstsize(head);

    printf("list lenght is: %d\n", size);

    while (head) {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }
    return 0;
}*/