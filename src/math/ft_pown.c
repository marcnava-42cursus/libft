/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pown.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:41:42 by marcnava          #+#    #+#             */
/*   Updated: 2025/06/30 02:46:26 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_pown - Computes the power of an integer base raised to a
 * non-negative integer exponent.
 * @base: The integer base.
 * @exp: The non-negative integer exponent.
 *
 * Returns the value of base raised to the power of exp (base^exp).
 * If exp is negative, returns 0.
 */
int	ft_pown(int base, int exp)
{
	int	i;
	int	result;

	if (exp < 0)
		return (0);
	i = 0;
	result = 1;
	while (i++ < exp)
		result *= base;
	return (result);
}
