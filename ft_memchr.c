/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:18:26 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 16:56:32 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*str = "Hello World";
// 	char	*ptr;

// 	ptr = ft_memchr(str, 'W', 11);
// 	if (ptr)
// 		printf("Found at: %ld\n", ptr - str);
// 	else
// 		printf("Not found\n");
// 	return (0);
// }