/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 19:51:04 by marvin            #+#    #+#             */
/*   Updated: 2026/11/09 19:51:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
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
	ft_lstadd_front(&head, second);
	ft_lstadd_front(&head, third);
	printf("first: %s\n", (char *)head->content);
	printf("last: %s\n", (char *)ft_lstlast(head)->content);
	return (0);
}
*/