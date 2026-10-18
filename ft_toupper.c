/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalmasr <noalmasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 12:56:01 by noalmasr          #+#    #+#             */
/*   Updated: 2026/10/16 12:59:29 by noalmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	else
		return (c);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%c\n", ft_toupper('a'));
// 	printf("%c\n", ft_toupper('z'));
// 	printf("%c\n", ft_toupper('B'));
// 	printf("%c\n", ft_toupper('7'));
// 	return (0);
// }