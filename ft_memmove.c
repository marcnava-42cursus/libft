/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:58:29 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/23 17:48:25 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest > src)
	{
		while (n > 0)
		{
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)src)[i] = ((unsigned char *)dest)[i];
			i++;
		}
	}
	return (dest);
}
