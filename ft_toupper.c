/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:39:14 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 17:49:23 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// int	main(void)
// {
// 	char	c;

// 	c = 'A';
// 	printf("'%c' to upper is '%c'\n", c, ft_toupper(c));
// 	c = 'a';
// 	printf("'%c' to upper is '%c'\n", c, ft_toupper(c));
// 	c = 'Z';
// 	printf("'%c' to upper is '%c'\n", c, ft_toupper(c));
// 	c = 'z';
// 	printf("'%c' to upper is '%c'\n", c, ft_toupper(c));
// 	c = '0';
// 	printf("'%c' to upper is '%c'\n", c, ft_toupper(c));
// 	return (0);
// }