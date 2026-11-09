/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 19:51:46 by marvin            #+#    #+#             */
/*   Updated: 2026/11/09 19:51:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

/*
#include <stdio.h>

void	del(void *content)
{
	printf("deleting: %s\n", (char *)content);
}

int	main(void)
{
	t_list	*head;

	head = ft_lstnew("a");
	ft_lstadd_back(&head, ft_lstnew("b"));
	ft_lstadd_back(&head, ft_lstnew("c"));
	ft_lstclear(&head, del);
	if (head == NULL)
		printf("head is NULL\n");
	return (0);
}
*/