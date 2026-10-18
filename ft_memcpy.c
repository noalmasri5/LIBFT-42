/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalmasr <noalmasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 12:19:43 by noalmasr          #+#    #+#             */
/*   Updated: 2026/10/17 15:49:46 by noalmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*source;
	size_t				i;

	if (dst == NULL && src == NULL)
		return (NULL);
	dest = (unsigned char *)dst;
	source = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = "Hello";
// 	char	dst[10] = "World";

// 	ft_memcpy(dst, src, 3);
// 	printf("Result 1: %s\n", dst);
// 	ft_memcpy(dst, src, 5);
// 	printf("Result 2: %s\n", dst);
// 	return (0);
// }