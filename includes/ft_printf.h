/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:57:48 by marcnava          #+#    #+#             */
/*   Updated: 2025/01/24 12:02:29 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

# include "libft.h"

# define FT_MAYUS 0
# define FT_MINUS 1

int		ft_printf(char const *format, ...);
void	ft_str_types(char const *format, va_list args, int *size);
void	ft_decimal_types(char const *format, va_list args, int *size);
void	ft_hex_types(char const *format, va_list args, int *size);
void	ft_special_types(char const *format, va_list args, int *size);
void	ft_print_hex(uintptr_t n, int *size, unsigned int capitalize);
void	ft_print_pointer(uintptr_t n, int *size);

void	ft_putnbr_printf(int n, int *size);
void	ft_putunbr_printf(unsigned int n, int *size);

#endif