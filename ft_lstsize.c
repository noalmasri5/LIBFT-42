/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 19:50:39 by marvin            #+#    #+#             */
/*   Updated: 2026/11/09 19:50:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	nodes;

	nodes = 0;
	while (lst != NULL)
	{
		nodes++;
		lst = lst->next;
	}
	return (nodes);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*second;
// 	t_list	*third;

// 	head = ft_lstnew("10");
// 	second = ft_lstnew("3");
// 	third = ft_lstnew("5");
// 	printf("one node: %u\n", ft_lstsize(head));
// 	ft_lstadd_front(&head, second);
// 	printf("two nodes: %u\n", ft_lstsize(head));
// 	return (0);
// }
