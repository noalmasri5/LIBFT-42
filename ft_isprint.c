/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalmasr <noalmasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 12:07:30 by noalmasr          #+#    #+#             */
/*   Updated: 2026/10/16 12:17:35 by noalmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_isprint('A'));
// 	printf("%d\n", ft_isprint(' '));
// 	printf("%d\n", ft_isprint('~'));
// 	printf("%d\n", ft_isprint('\n'));
// 	printf("%d\n", ft_isprint(127));
// 	return (0);
// }