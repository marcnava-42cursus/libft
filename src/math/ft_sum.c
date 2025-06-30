/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 14:56:32 by marcnava          #+#    #+#             */
/*   Updated: 2025/06/30 02:46:54 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Calculates the sum of a variable number of integer arguments.
 *
 * This function takes a count of integers followed by that many integer
 * arguments, and returns their sum. If the count is less than or equal to zero,
 * the function returns 0.
 *
 * @param count The number of integer arguments to sum.
 * @param ...   The integers to be summed.
 * @return The sum of the provided integers, or 0 if count <= 0.
 *
 * @note This function uses variadic arguments (stdarg.h).
 *
 * @example
 * int result = ft_sum(3, 1, 2, 3); // result == 6
 */
int	ft_sum(int count, ...)
{
	va_list	args;
	int		sum;
	int		i;

	if (count <= 0)
		return (0);
	sum = 0;
	va_start(args, count);
	i = 0;
	while (i++ < count)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
