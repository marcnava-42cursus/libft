/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 03:01:28 by marcnava          #+#    #+#             */
/*   Updated: 2025/06/30 03:05:33 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

uint32_t	ft_abs(int nbr)
{
	if (nbr == INT_MAX)
		return ((uint32_t)INT_MAX + 1u);
	if (nbr < 0)
		return ((uint32_t)(-nbr));
	return ((uint32_t)nbr);
}
