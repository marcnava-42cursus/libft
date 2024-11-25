/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:17:31 by marcnava          #+#    #+#             */
/*   Updated: 2024/11/19 19:27:44 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"
#include "../headers/libft.h"

void	ft_print_hex(uintptr_t n, int *size, unsigned int capitalize)
{
	if (n >= 16)
		ft_print_hex((n / 16), size, capitalize);
	if (n % 16 < 10)
	{
		ft_putchar(n % 16 + '0');
		(*size)++;
	}
	else
	{
		if (capitalize)
			ft_putchar(n % 16 - 10 + 'a');
		else
			ft_putchar(n % 16 - 10 + 'A');
		(*size)++;
	}
}

void	ft_print_pointer(uintptr_t n, int *size)
{
	if (n == 0)
	{
		ft_putstr("(nil)");
		(*size) += 5;
	}
	else
	{
		ft_putstr("0x");
		(*size) += 2;
		ft_print_hex(n, size, FT_MINUS);
	}
}
