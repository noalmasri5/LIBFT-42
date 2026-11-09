/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalmasr <noalmasr@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 12:14:55 by noalmasr            #+#    #+#             */
/*   Updated: 2026/11/01 12:14:55 by noalmasr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

static size_t	word_len(char const *s, char c)
{
	char	*end;

	end = ft_strchr(s, c);
	if (end == NULL)
		return (ft_strlen(s));
	return (end - s);
}

static char	**free_words(char **result, size_t words_made)
{
	while (words_made > 0)
	{
		words_made--;
		free(result[words_made]);
	}
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	w;
	size_t	word_count;

	if (s == NULL)
		return (NULL);
	word_count = count_words(s, c);
	result = malloc((word_count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	i = 0;
	w = 0;
	while (w < word_count)
	{
		while (s[i] == c)
			i++;
		result[w] = ft_substr(s, i, word_len(&s[i], c));
		if (result[w] == NULL)
			return (free_words(result, w));
		i = i + ft_strlen(result[w]);
		w++;
	}
	result[w] = NULL;
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
// char **result;
// int i;

// result = ft_split("--42 -is the best", '-');
// i = 0;
// while (result[i])
// {
// 	printf("[%s]\n", result[i]);
// 	free(result[i]);
// 	i++;
// }
// free(result);
// return (0);

// }

