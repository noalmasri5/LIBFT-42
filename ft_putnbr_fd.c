/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noalmasr <noalmasr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 11:46:09 by noalmasr          #+#    #+#             */
/*   Updated: 2026/10/24 11:55:38 by noalmasr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}

// int main(void)
// {
// 	ft_putnbr_fd(-67, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(79, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-2147483648, 1);
// 	write(1, "\n", 1);
// 	return 0;
// }