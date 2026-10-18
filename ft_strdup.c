/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalmasr <noalmasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 10:00:44 by noalmasr          #+#    #+#             */
/*   Updated: 2026/10/17 10:27:48 by noalmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		i;

	copy = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*copy;

// 	copy = ft_strdup("Hello 42");
// 	if (copy == NULL)
// 		return (1);
// 	printf("Copy: %s\n", copy);
// 	free(copy);
// 	return (0);
// }
