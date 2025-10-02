/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 03:01:28 by marcnava          #+#    #+#             */
/*   Updated: 2025/10/02 12:43:58 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

t_uint	ft_abs(t_int nbr)
{
	if (nbr == INT_MAX)
		return ((t_uint)INT_MAX + 1u);
	if (nbr < 0)
		return ((t_uint)(-nbr));
	return ((t_uint)nbr);
}
