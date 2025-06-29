/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digits_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:30:05 by marcos            #+#    #+#             */
/*   Updated: 2025/06/29 21:19:01 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of digits needed to represent an integer in a given
 *        base.
 * 
 * @param n The integer whose digits are to be counted.
 * @param base_len The length of the numerical base (e.g., 10 for decimal, 2
 *                 for binary).
 * @return The number of digits required to represent `n` in the given base.
 * 
 * @details
 * This function determines how many digits are needed to represent the integer
 * `n` when converted to a number system of `base_len`. The counting is done by
 * repeatedly dividing `n` by `base_len` until `n` becomes zero.
 * 
 * - If `n` is `0`, the function returns `1`, as `0` always requires one digit.
 * - Otherwise, it iterates through successive divisions of `n` by `base_len`, 
 *   incrementing `digits` each time.
 * 
 * @note This function does not handle negative numbers explicitly. If `n` is
 *       negative, the result is the same as for its positive counterpart,
 *       assuming `base_len` is positive.
 * 
 * @warning If `base_len` is `0`, this function will result in a division by
 *          zero error.
 */
size_t	ft_count_digits(int n, int base_len)
{
	size_t	digits;

	if (n == 0)
		return (1);
	digits = 0;
	while (n != 0)
	{
		n /= base_len;
		digits++;
	}
	return (digits);
}
