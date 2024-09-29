/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:40:47 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 16:10:28 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// int	main(void)
// {
// 	char	c = 'a';
// 	printf("Is '%c' alphabetic? %s\n", c, ft_isalpha(c) ? "Yes" : "No");
// 	c = '1';
// 	printf("Is '%c' alphabetic? %s\n", c, ft_isalpha(c) ? "Yes" : "No");
// 	c = '!';
// 	printf("Is '%c' alphabetic? %s\n", c, ft_isalpha(c) ? "Yes" : "No");
// 	return (0);
// }