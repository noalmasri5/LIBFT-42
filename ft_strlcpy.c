/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalmasr <noalmasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 15:22:31 by noalmasr          #+#    #+#             */
/*   Updated: 2026/10/16 15:46:49 by noalmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dst[4];
// 	size_t	result;

// 	result = ft_strlcpy(dst, "Hello", sizeof(dst));
// 	printf("dst = %s\n", dst);
// 	printf("return = %zu\n", result);
// 	return (0);
// }