/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalmasr <noalmasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 12:46:52 by noalmasr          #+#    #+#             */
/*   Updated: 2026/10/24 14:16:17 by noalmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
	{
		end--;
	}
	return (ft_substr(s1, start, end - start));
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%s\n", ft_strtrim("*******Hello*!!World!!!!", "*!"));
//     return 0;
// }