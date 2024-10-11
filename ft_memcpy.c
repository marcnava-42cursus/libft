/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:18:03 by marcnava          #+#    #+#             */
/*   Updated: 2024/10/07 18:24:35 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	str1[] = "Hello World";
// 	char	str2[11];
// 	char	*ptr;

// 	ptr = ft_memcpy(str2, str1, 11);
// 	if (ptr)
// 		printf("%s\n", str2);
// 	else
// 		printf("Error\n");
// 	return (0);
// }