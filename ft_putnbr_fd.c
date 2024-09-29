/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:56:15 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 16:58:33 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd((n % 10) + '0', fd);
}

// int	main(void)
// {
// 	ft_putnbr_fd(1234567890, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(-1234567890, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(0, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(-2147483648, 1);
// 	ft_putchar_fd('\n', 1);
// 	return (0);
// }