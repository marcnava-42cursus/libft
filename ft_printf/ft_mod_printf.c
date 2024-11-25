/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mod_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:17:03 by marcnava          #+#    #+#             */
/*   Updated: 2024/11/19 19:28:36 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"
#include "../headers/libft.h"

void	ft_putnbr_printf(int n, int *size)
{
	if (n == INT_MIN)
	{
		ft_putstr("-2147483648");
		(*size) += 11;
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		(*size)++;
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_printf(n / 10, size);
	ft_putchar((n % 10) + '0');
	(*size)++;
}

void	ft_putunbr_printf(unsigned int n, int *size)
{
	if (n >= 10)
		ft_putunbr_printf(n / 10, size);
	ft_putchar((n % 10) + '0');
	(*size)++;
}
