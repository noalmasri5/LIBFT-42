/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalmasr <noalmasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:37:09 by noalmasr          #+#    #+#             */
/*   Updated: 2026/10/24 17:53:07 by noalmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// void	change(unsigned int i, char *c)
// {
// 	(void)i;
// 	*c = 'X';
// }

// int	main(void)
// {
// 	char	str[] = "hello";

// 	ft_striteri(str, change);
// 	printf("%s\n", str);
// 	return (0);
// }