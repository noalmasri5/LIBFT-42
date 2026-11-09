/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 19:49:53 by marvin            #+#    #+#             */
/*   Updated: 2026/11/09 19:49:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}


// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*node;

// 	node = ft_lstnew("hi");
// 	printf("content: %s\n", (char *)node->content);
// 	if (node->next == NULL)
// 		printf("next: NULL\n");
// 	free(node);
// 	return (0);
// }
