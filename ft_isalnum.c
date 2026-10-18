/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalmasr <noalmasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:46:59 by noalmasr          #+#    #+#             */
/*   Updated: 2026/10/16 11:55:41 by noalmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isalnum('A'));
// 	printf("%d\n", ft_isalnum('z'));
// 	printf("%d\n", ft_isalnum('5'));
// 	printf("%d\n", ft_isalnum('@'));
// 	printf("%d\n", ft_isalnum(' '));
// 	return (0);
// }
