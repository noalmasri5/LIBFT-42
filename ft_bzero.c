/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalmasr <noalmasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:44:30 by noalmasr          #+#    #+#             */
/*   Updated: 2026/10/17 11:51:12 by noalmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Hello";

// 	ft_bzero(str, 3);
// 	printf("Byte 0: %d\n", str[0]);
// 	printf("Byte 1: %d\n", str[1]);
// 	printf("Byte 2: %d\n", str[2]);
// 	printf("Byte 3: %c\n", str[3]);
// 	return (0);
// }
