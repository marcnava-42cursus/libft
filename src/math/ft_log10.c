/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log10.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 23:09:35 by marcnava          #+#    #+#             */
/*   Updated: 2025/06/29 23:12:35 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Calculates the base-10 logarithm of an integer.
 *
 * This function returns the base-10 logarithm of the given integer `nbr`
 * by calling the `ft_logn` function with base 10.
 *
 * @param nbr The integer whose base-10 logarithm is to be calculated.
 * @return The base-10 logarithm of `nbr`.
 */
int	ft_log10(int nbr)
{
	return (ft_logn(10, nbr));
}
