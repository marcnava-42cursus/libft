/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:55:54 by marcnava          #+#    #+#             */
/*   Updated: 2024/11/19 19:28:30 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"
#include "../headers/libft.h"

static void	ft_choose_types(char const *format, va_list args, int *size)
{
	if (*format == 'c' || *format == 's')
		ft_str_types(format, args, size);
	else if (*format == 'd' || *format == 'i' || *format == 'u')
		ft_decimal_types(format, args, size);
	else if (*format == 'x' || *format == 'X')
		ft_hex_types(format, args, size);
	else if (*format == '%' || *format == 'p')
		ft_special_types(format, args, size);
	else if (*format == '\0')
	{
		(*size) = -1;
		return ;
	}
	else
	{
		ft_putchar('%');
		ft_putchar(*format);
		(*size) += 2;
	}
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		size;

	va_start(args, format);
	size = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			ft_choose_types(format, args, &size);
		}
		else
		{
			ft_putchar(*format);
			size++;
		}
		if (size == -1)
			return (-1);
		format++;
	}
	va_end(args);
	return (size);
}
