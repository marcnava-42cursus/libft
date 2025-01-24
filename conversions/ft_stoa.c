/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:40:33 by marcnava          #+#    #+#             */
/*   Updated: 2025/01/24 12:07:23 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*ft_stoa_base_conversion(short n, const char *base, size_t digits)
{
	char	*num_str;

	num_str = (char *)ft_calloc(digits + 1, sizeof(char));
	if (!num_str)
		return (NULL);
	while (digits-- > 0)
	{
		num_str[digits] = base[n % ft_strlen(base)];
		n /= ft_strlen(base);
	}
	return (num_str);
}

char	*ft_stoa_base(short n, const char *base)
{
	const size_t	base_len = ft_strlen(base);
	size_t			digits;
	int				neg;
	char			*num_str;

	if (n == 0)
		return (ft_strdup("0"));
	neg = 0;
	if (n < 0)
	{
		if (n == SHRT_MIN)
			return (ft_strdup("-32767"));
		neg = 1;
		n = -n;
	}
	digits = ft_count_digits(n, base_len);
	if (neg)
		digits++;
	num_str = ft_stoa_base_conversion(n, base, digits);
	if (!num_str)
		return (NULL);
	if (neg)
		num_str[0] = '-';
	return (num_str);
}

char	*ft_stoa_o(short n)
{
	return (ft_stoa_base(n, "01234567"));
}

char	*ft_stoa_x(short n)
{
	return (ft_stoa_base(n, "0123456789abcdef"));
}

char	*ft_stoa(short n)
{
	return (ft_stoa_base(n, "0123456789"));
}
