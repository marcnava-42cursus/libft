/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:13:18 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 16:09:57 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// int	main(void)
// {
// 	char	c = 'a';
// 	printf("Is '%c' alphanumeric? %s\n", c, ft_isalnum(c) ? "Yes" : "No");
// 	c = '1';
// 	printf("Is '%c' alphanumeric? %s\n", c, ft_isalnum(c) ? "Yes" : "No");
// 	c = '!';
// 	printf("Is '%c' alphanumeric? %s\n", c, ft_isalnum(c) ? "Yes" : "No");
// 	return (0);
// }