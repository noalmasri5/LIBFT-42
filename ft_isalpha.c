/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalmasr <noalmasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 11:19:05 by noalmasr          #+#    #+#             */
/*   Updated: 2026/10/16 11:39:05 by noalmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int ft_isalpha(int c);

// int main(void)
// {
//     printf("%d\n", ft_isalpha('A'));
//     return (0);
// }
