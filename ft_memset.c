/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:40:05 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 16:57:19 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	str[11] = "Hello World";
// 	char	*ptr;

// 	ptr = ft_memset(str, 'a', 11);
// 	if (ptr)
// 		printf("%s\n", str);
// 	else
// 		printf("Error\n");
// 	return (0);
// }