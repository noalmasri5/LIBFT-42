/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 19:52:53 by marvin            #+#    #+#             */
/*   Updated: 2026/11/09 19:52:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
#include <stdio.h>

void	print(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*head;

	head = ft_lstnew("a");
	ft_lstadd_back(&head, ft_lstnew("b"));
	ft_lstadd_back(&head, ft_lstnew("c"));
	ft_lstiter(head, print);
	return (0);
}
*/