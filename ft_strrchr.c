/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:06:42 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 17:35:54 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*str = "Hello World";
// 	char	c = 'o';
// 	char	*ptr;

// 	ptr = ft_strrchr(str, c);
// 	if (ptr)
// 		printf("'%c' found at position %ld\n", c, ptr - str);
// 	else
// 		printf("'%c' not found\n", c);
// 	return (0);
// }