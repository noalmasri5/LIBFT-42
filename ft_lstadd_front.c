/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 19:50:23 by marvin            #+#    #+#             */
/*   Updated: 2026/11/09 19:50:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}


// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*new;

// 	head = ft_lstnew("second");
// 	new = ft_lstnew("first");
// 	ft_lstadd_front(&head, new);
// 	printf("%s\n", (char *)head->content);
// 	printf("%s\n", (char *)head->next->content);
// 	free(head->next);
// 	free(head);
// 	return (0);
// }
