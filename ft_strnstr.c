/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:47:09 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 17:32:51 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while ((big[i + j] == little[j]) && little[j] && (i + j < len))
			j++;
		if (!little[j])
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*big = "Hello World";
// 	char	*little = "World";
// 	char	*ptr;

// 	ptr = ft_strnstr(big, little, 11);
// 	if (ptr)
// 		printf("'%s' found at position %ld\n", little, ptr - big);
// 	else
// 		printf("'%s' not found\n", little);
// 	return (0);
// }