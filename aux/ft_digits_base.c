/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digits_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:30:05 by marcos            #+#    #+#             */
/*   Updated: 2024/11/19 19:15:07 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

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
