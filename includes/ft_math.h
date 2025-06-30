/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 03:24:34 by marcnava          #+#    #+#             */
/*   Updated: 2025/06/30 03:30:52 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include <stdint.h>

# define FT_E 2.718281828
# define FT_PI 3.141592653
# define FT_PHI 1.618033988
# define FT_SQRT2 1.414213562

uint32_t	ft_abs(int nbr);
int			ft_avg(int count, ...);
int			ft_pow2(int base);
int			ft_pown(int base, int exp);
int			ft_sum(int count, ...);
int			ft_logn(int base, int nbr);
int			ft_log10(int nbr);

#endif