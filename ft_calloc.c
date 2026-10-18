/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalmasr <noalmasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 11:12:55 by noalmasr          #+#    #+#             */
/*   Updated: 2026/10/17 11:38:41 by noalmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*numbers;
// 	int	i;

// 	numbers = ft_calloc(9, sizeof(int));
// 	if (numbers == NULL)
// 		return (1);
// 	i = 0;
// 	while (i < 10)
// 	{
// 		printf("%d", numbers[i]);
// 		i++;
// 	}
// 	free(numbers);
// 	return (0);
// }