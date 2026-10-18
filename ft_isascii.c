/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalmasr <noalmasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:53:19 by noalmasr          #+#    #+#             */
/*   Updated: 2026/10/16 12:06:28 by noalmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_isascii(65));
// 	printf("%d\n", ft_isascii(0));
// 	printf("%d\n", ft_isascii(25));
// 	printf("%d\n", ft_isascii(128));
// 	printf("%d\n", ft_isascii(-1));
// 	return (0);
// }