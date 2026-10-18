/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalmasr <noalmasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 15:51:59 by noalmasr          #+#    #+#             */
/*   Updated: 2026/10/16 16:54:17 by noalmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	i = 0;
	j = 0;
	while (i < size && dst[i] != '\0')
		i++;
	dst_len = i;
	if (i == size)
		return (size + ft_strlen(src));
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + ft_strlen(src));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dst[20] = "Hello";

// 	printf("Return: %zu\n", ft_strlcat(dst, "World", 10));
// 	printf("Result: %s\n", dst);
// 	return (0);
// }