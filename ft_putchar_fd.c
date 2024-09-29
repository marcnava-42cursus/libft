/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:14:48 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 16:57:53 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	ft_putchar_fd('H', 1);
// 	ft_putchar_fd('e', 1);
// 	ft_putchar_fd('l', 1);
// 	ft_putchar_fd('l', 1);
// 	ft_putchar_fd('o', 1);
// 	ft_putchar_fd('\n', 1);
// 	return (0);
// }