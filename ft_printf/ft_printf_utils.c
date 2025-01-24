/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:25:52 by marcnava          #+#    #+#             */
/*   Updated: 2025/01/24 12:07:23 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_str_types(char const *format, va_list args, int *size)
{
	char	*temp_arg;

	if (*format == 'c')
	{
		ft_putchar_fd(va_arg(args, int), STDOUT_FILENO);
		(*size)++;
	}
	else if (*format == 's')
	{
		temp_arg = (char *)va_arg(args, char *);
		if (!temp_arg)
			temp_arg = "(null)";
		ft_putstr_fd(temp_arg, STDOUT_FILENO);
		(*size) += ft_strlen(temp_arg);
	}
}

void	ft_decimal_types(char const *format, va_list args, int *size)
{
	if (*format == 'd')
		ft_putnbr_printf(va_arg(args, int), size);
	else if (*format == 'i')
		ft_putnbr_printf(va_arg(args, int), size);
	else if (*format == 'u')
		ft_putunbr_printf(va_arg(args, unsigned int), size);
}

void	ft_hex_types(char const *format, va_list args, int *size)
{
	if (*format == 'x')
		ft_print_hex(va_arg(args, unsigned int), size, FT_MINUS);
	else if (*format == 'X')
		ft_print_hex(va_arg(args, unsigned int), size, FT_MAYUS);
}

void	ft_special_types(char const *format, va_list args, int *size)
{
	if (*format == '%')
	{
		ft_putchar_fd('%', STDOUT_FILENO);
		(*size)++;
	}
	else if (*format == 'p')
		ft_print_pointer(va_arg(args, uintptr_t), size);
}
