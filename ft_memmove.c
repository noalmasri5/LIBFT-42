/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalmasr <noalmasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 12:56:18 by noalmasr          #+#    #+#             */
/*   Updated: 2026/10/17 14:29:42 by noalmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
		ft_memcpy(dst, src, n);
	else if (d > s)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dst);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str1[] = "Happyday";
// 	char	str2[] = "Birth";

// 	ft_memmove(str1, str2, 5);
// 	printf("Test 1: %s\n", str1);
// 	return (0);
// }