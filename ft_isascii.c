/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:03:15 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 16:10:46 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int	main(void)
// {
// 	char	c = 'a';
// 	printf("Is '%c' an ASCII character? %s\n", c, ft_isascii(c) ? "Yes" : "No");
// 	c = 128;
// 	printf("Is '%c' an ASCII character? %s\n", c, ft_isascii(c) ? "Yes" : "No");
// 	c = -1;
// 	printf("Is '%c' an ASCII character? %s\n", c, ft_isascii(c) ? "Yes" : "No");
// 	return (0);
// }
