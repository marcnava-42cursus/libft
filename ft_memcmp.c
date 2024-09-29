/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:20:26 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 16:56:40 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// int	main(void)
// {
// 	char	str1[] = "Hello World";
// 	char	str2[] = "Hello World";
// 	int		ret;

// 	ret = ft_memcmp(str1, str2, 11);
// 	if (ret == 0)
// 		printf("Strings are equal\n");
// 	else
// 		printf("Strings are different\n");
// 	return (0);
// }