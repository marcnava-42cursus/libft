/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:54:49 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 16:11:03 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int main(void)
// {
// 	char	c = 'a';
// 	printf("Is '%c' a digit? %s\n", c, ft_isdigit(c) ? "Yes" : "No");
// 	c = '1';
// 	printf("Is '%c' a digit? %s\n", c, ft_isdigit(c) ? "Yes" : "No");
// 	c = '!';
// 	printf("Is '%c' a digit? %s\n", c, ft_isdigit(c) ? "Yes" : "No");
// 	return (0);
// }