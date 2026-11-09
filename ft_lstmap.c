/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 19:53:15 by marvin            #+#    #+#             */
/*   Updated: 2026/11/09 19:53:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_l;
	t_list	*new_n;
	void	*new_c;

	if (f == NULL || del == NULL)
		return (NULL);
	new_l = NULL;
	while (lst)
	{
		new_c = f(lst->content);
		new_n = ft_lstnew(new_c);
		if (new_n == NULL)
		{
			del(new_c);
			ft_lstclear(&new_l, del);
			return (NULL);
		}
		ft_lstadd_back(&new_l, new_n);
		lst = lst->next;
	}
	return (new_l);
}

/*
#include <stdio.h>

void	*add_mark(void *content)
{
	return (ft_strjoin(content, "!"));
}

int	main(void)
{
	t_list	*head;
	t_list	*new;

	head = ft_lstnew("a");
	ft_lstadd_back(&head, ft_lstnew("b"));
	new = ft_lstmap(head, add_mark, free);
	printf("%s\n", (char *)new->content);
	printf("%s\n", (char *)new->next->content);
	return (0);
}
*/