/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalmasr <noalmasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 14:24:10 by noalmasr          #+#    #+#             */
/*   Updated: 2026/10/24 16:22:14 by noalmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t   count_words(const char *s, char c)
{
    size_t  i;
    size_t count;

    i = 0;
    count = 0;
    while(s[i] != '\0')
    {
        if( (s[i] != c) && (i == 0 || s[i - 1] == c) )
            count++;
        i++;
    }
    return (count);
}

char    **ft_split(char const *s, char c)
{
    char **words;
    size_t i;
    
    words = malloc((count_words(s, c) + 1) * sizeof(char *));
    if (words == NULL)
        return(NULL);
    while( s[i] != '\0' && s[i] == c)
        i++;
    
    while(s[i] != '\0' && s[i] != c)
    {
        i++;
    }
    words[0] = malloc(((i - start) + 1 )* sizeof(char));
    if (words[0] == NULL)
    {
        free(words);
        return(NULL);
    }
        
    
}