/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_priv.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 21:52:00 by marcnava          #+#    #+#             */
/*   Updated: 2025/09/20 21:52:00 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_PRIV_H
# define FT_PRINTF_PRIV_H

# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>
# include "libft.h"

/* Flags/constantes internas */
# define FT_MAYUS 0
# define FT_MINUS 1

/* Prototipos internos (uso dentro de src/ft_printf) */
void	ft_str_types(char const *format, va_list args, int *size);
void	ft_decimal_types(char const *format, va_list args, int *size);
void	ft_hex_types(char const *format, va_list args, int *size);
void	ft_special_types(char const *format, va_list args, int *size);

void	ft_print_hex(uintptr_t n, int *size, unsigned int capitalize);
void	ft_print_pointer(uintptr_t n, int *size);

void	ft_putnbr_printf(int n, int *size);
void	ft_putunbr_printf(unsigned int n, int *size);

#endif
