/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_logn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:58:16 by marcnava          #+#    #+#             */
/*   Updated: 2025/10/02 12:46:08 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Calculates the integer part of the logarithm of a number with a given base.
 *
 * @param base The base of the logarithm. Must be greater than 1.
 * @param nbr The number to compute the logarithm for. Must be greater than 0.
 * @return The integer part of log_base(nbr). Returns 0 if base <= 1 or
 *         nbr <= 0.
 */
t_int	ft_logn(t_int base, t_int nbr)
{
	t_int	result;

	result = 0;
	if (base <= 1 || nbr <= 0)
		return (0);
	while (nbr >= base)
	{
		nbr /= base;
		result++;
	}
	return (result);
}
