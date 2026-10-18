/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalmasr <noalmasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 13:13:37 by noalmasr          #+#    #+#             */
/*   Updated: 2026/10/16 14:31:37 by noalmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0')
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_strncmp("apple", "apply", 4));
// 	printf("%d\n", ft_strncmp("apple", "apply", 5));
// 	printf("%d\n", ft_strncmp("cat", "car", 3));
// 	printf("%d\n", ft_strncmp("hello", "hello", 5));
// 	printf("%d\n", ft_strncmp("abc", "xyz", 0));
// 	return (0);
// }