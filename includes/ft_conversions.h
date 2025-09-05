/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 03:14:38 by marcnava          #+#    #+#             */
/*   Updated: 2025/06/30 03:27:14 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONS_H
# define CONVERSIONS_H

# include <limits.h>

int		ft_atoi(const char *nptr);
long	ft_atol(const char *nptr);
short	ft_atos(const char *nptr);
char	*ft_itoa_base(int n, const char *base);
char	*ft_itoa_o(int n);
char	*ft_itoa_x(int n);
char	*ft_itoa(int n);
char	*ft_ltoa_base(long n, const char *base);
char	*ft_ltoa_o(long n);
char	*ft_ltoa_x(long n);
char	*ft_ltoa(long n);
char	*ft_stoa_base(short n, const char *base);
char	*ft_stoa_o(short n);
char	*ft_stoa_x(short n);
char	*ft_stoa(short n);
char	*ft_uitoa_base(unsigned int n, const char *base);
char	*ft_uitoa_o(unsigned int n);
char	*ft_uitoa_x(unsigned int n);
char	*ft_uitoa(unsigned int n);
char	*ft_ultoa_base(unsigned long n, const char *base);
char	*ft_ultoa_o(unsigned long n);
char	*ft_ultoa_x(unsigned long n);
char	*ft_ultoa(unsigned long n);
char	*ft_ustoa_base(unsigned short n, const char *base);
char	*ft_ustoa_o(unsigned short n);
char	*ft_ustoa_x(unsigned short n);
char	*ft_ustoa(unsigned short n);

#endif