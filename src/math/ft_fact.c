/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fact.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 02:02:56 by marcnava          #+#    #+#             */
/*   Updated: 2025/06/30 02:06:10 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_fact - Calculates the factorial of a non-negative integer.
 * @nbr: The integer for which to calculate the factorial.
 *
 * Return: The factorial of @nbr if @nbr >= 0.
 *         Returns 1 if @nbr == 0 (by definition).
 *         Returns 0 if @nbr < 0 (factorial is undefined for negative numbers).
 *
 * This function uses recursion to compute the factorial.
 */
int	ft_fact(int nbr)
{
	if (nbr < 0)
		return (0);
	if (nbr == 0)
		return (1);
	return (nbr * ft_fact(nbr - 1));
}
