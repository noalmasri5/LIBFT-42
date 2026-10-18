/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalmasr <noalmasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:09:35 by noalmasr          #+#    #+#             */
/*   Updated: 2026/10/17 17:26:53 by noalmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;
	unsigned char		trgt;

	ptr = (const unsigned char *)s;
	trgt = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == trgt)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "42abudhabi";
// 	char	*found;

// 	found = ft_memchr(str, 'a', sizeof(str));
// 	printf("%s\n", found);
// 	return (0);
// }