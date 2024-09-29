/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:03:35 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 16:08:30 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// int	main(void)
// {
// 	char	str[] = "Hello, World!";
// 	size_t	len = 5;

// 	printf("Original: \"%s\"\n", str);
// 	ft_bzero(str, len);
// 	printf("After bzero: \"%s\"\n", str);
// 	return (0);
// }