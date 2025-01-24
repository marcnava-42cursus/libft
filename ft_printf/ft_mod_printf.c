/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mod_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:17:03 by marcnava          #+#    #+#             */
/*   Updated: 2025/01/24 12:07:23 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr_printf(int n, int *size)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", STDOUT_FILENO);
		(*size) += 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', STDOUT_FILENO);
		(*size)++;
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_printf(n / 10, size);
	ft_putchar_fd((n % 10) + '0', STDOUT_FILENO);
	(*size)++;
}

void	ft_putunbr_printf(unsigned int n, int *size)
{
	if (n >= 10)
		ft_putunbr_printf(n / 10, size);
	ft_putchar_fd((n % 10) + '0', STDOUT_FILENO);
	(*size)++;
}
