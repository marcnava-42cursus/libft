/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:31:15 by sede-san          #+#    #+#             */
/*   Updated: 2025/01/24 12:07:23 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_ultoa_base(unsigned long n, const char *base)
{
	const size_t	base_len = ft_strlen(base);
	char			*num_str;
	size_t			digits;

	digits = ft_count_digits(n, base_len);
	num_str = (char *)ft_calloc((digits + 1), sizeof(char));
	if (!num_str)
		return (NULL);
	while (digits-- > 0)
	{
		num_str[digits] = base[n % base_len];
		n /= base_len;
	}
	return (num_str);
}

char	*ft_ultoa_o(unsigned long n)
{
	return (ft_ultoa_base(n, "01234567"));
}

char	*ft_ultoa_x(unsigned long n)
{
	return (ft_ultoa_base(n, "0123456789abcdef"));
}

char	*ft_ultoa(unsigned long n)
{
	return (ft_ultoa_base(n, "0123456789"));
}
