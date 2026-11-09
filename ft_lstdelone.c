/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 19:51:24 by marvin            #+#    #+#             */
/*   Updated: 2026/11/09 19:51:24 by marvin           ###   ########.fr       */
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

/*
#include <stdio.h>

void	del(void *content)
{
	printf("deleting: %s\n", (char *)content);
}

int	main(void)
{
	t_list	*node;

	node = ft_lstnew("a");
	ft_lstdelone(node, del);
	return (0);
}
*/