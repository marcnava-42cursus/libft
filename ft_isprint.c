/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:21:59 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 16:13:20 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int	main(void)
// {
// 	char	c = 'a';
// 	printf("Is '%c' a printable character? %s\n", c,
// 	ft_isprint(c) ? "Yes" : "No");
// 	c = 31;
// 	printf("Is '%c' a printable character? %s\n", c,
// 	ft_isprint(c) ? "Yes" : "No");
// 	c = 127;
// 	printf("Is '%c' a printable character? %s\n", c,
// 	ft_isprint(c) ? "Yes" : "No");
// 	return (0);
// }