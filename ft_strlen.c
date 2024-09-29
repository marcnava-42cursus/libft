/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:24:55 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 17:32:02 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	char	*str = "Hello World";
// 	size_t	len;

// 	len = ft_strlen(str);
// 	printf("'%s' has length %ld\n", str, len);
// 	return (0);
// }