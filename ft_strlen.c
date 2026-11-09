/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 12:18:47 by noalmasr          #+#    #+#             */
/*   Updated: 2026/11/09 21:35:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

//#include <stdio.h>
//int	main(void)
// {
// 	printf("%zu\n", ft_strlen("Hello"));
// 	printf("%zu\n", ft_strlen("42"));
// 	printf("%zu\n", ft_strlen(""));
// 	return (0);
// }