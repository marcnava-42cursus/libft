/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_avg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 14:40:39 by marcnava          #+#    #+#             */
/*   Updated: 2025/10/02 12:44:19 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

/**
 * Calculates the average of a variable number of integer arguments.
 *
 * @param count The number of integer arguments provided.
 * @param ...   The integers to be averaged.
 * @return      The average of the provided integers as an integer
 *              (integer division). Returns 0 if count is less
 *              than or equal to 0.
 *
 * Example usage:
 *     int avg = ft_avg(3, 10, 20, 30); // avg = 20
 */
t_int	ft_avg(t_int count, ...)
{
	va_list	args;
	t_int	sum;
	t_int	i;

	if (count <= 0)
		return (0);
	sum = 0;
	va_start(args, count);
	i = 0;
	while (i++ < count)
		sum += va_arg(args, int);
	va_end(args);
	return (sum / count);
}
