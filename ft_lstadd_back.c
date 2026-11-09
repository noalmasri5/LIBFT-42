/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:24:45 by marvin            #+#    #+#             */
/*   Updated: 2026/11/09 21:24:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	else
		ft_lstlast(*lst)->next = new;
}

/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*second;
	t_list	*third;

	head = ft_lstnew("a");
	second = ft_lstnew("b");
	third = ft_lstnew("c");
	ft_lstadd_back(&head, second);
	ft_lstadd_back(&head, third);
	printf("first: %s\n", (char *)head->content);
	printf("last: %s\n", (char *)ft_lstlast(head)->content);
	return (0);
}
*/