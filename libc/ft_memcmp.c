/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:20:26 by marcnava          #+#    #+#             */
/*   Updated: 2024/11/19 19:20:08 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i) == *((unsigned char *)s2 + i))
			i++;
		else
			return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
	}
	return (0);
}
