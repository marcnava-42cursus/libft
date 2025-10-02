/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 03:24:34 by marcnava          #+#    #+#             */
/*   Updated: 2025/10/01 18:09:45 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include <stdint.h>

# define FT_E			2.7182818284590452354	/* e */
# define FT_LOG2E		1.4426950408889634074	/* log_2 e */
# define FT_LOG10E		0.43429448190325182765	/* log_10 e */
# define FT_LN2			0.69314718055994530942	/* log_e 2 */
# define FT_LN10		2.30258509299404568402	/* log_e 10 */
# define FT_PI			3.14159265358979323846	/* pi */
# define FT_PI_2		1.57079632679489661923	/* pi/2 */
# define FT_PI_4		0.78539816339744830962	/* pi/4 */
# define FT_1_PI		0.31830988618379067154	/* 1/pi */
# define FT_2_PI		0.63661977236758134308	/* 2/pi */
# define FT_2_SQRTPI	1.12837916709551257390	/* 2/sqrt(pi) */
# define FT_SQRT2		1.41421356237309504880	/* sqrt(2) */
# define FT_SQRT1_2		0.70710678118654752440	/* 1/sqrt(2) */

uint32_t	ft_abs(int nbr);
int			ft_avg(int count, ...);
int			ft_pow2(int base);
int			ft_pown(int base, int exp);
int			ft_sum(int count, ...);
int			ft_logn(int base, int nbr);
int			ft_log10(int nbr);

#endif