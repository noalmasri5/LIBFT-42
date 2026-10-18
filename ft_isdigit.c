/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalmasr <noalmasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:27:06 by noalmasr          #+#    #+#             */
/*   Updated: 2026/10/16 11:43:32 by noalmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isdigit('5'));
// 	printf("%d\n", ft_isdigit('0'));
// 	printf("%d\n", ft_isdigit('A'));
// 	printf("%d\n", ft_isdigit('9'));
// 	return (0);
// }
