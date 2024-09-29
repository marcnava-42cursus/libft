/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:42:11 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 17:36:23 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// int	main(void)
// {
// 	char	c;

// 	c = 'A';
// 	printf("'%c' to lower is '%c'\n", c, ft_tolower(c));
// 	c = 'a';
// 	printf("'%c' to lower is '%c'\n", c, ft_tolower(c));
// 	c = 'Z';
// 	printf("'%c' to lower is '%c'\n", c, ft_tolower(c));
// 	c = 'z';
// 	printf("'%c' to lower is '%c'\n", c, ft_tolower(c));
// 	c = '0';
// 	printf("'%c' to lower is '%c'\n", c, ft_tolower(c));
// 	return (0);
// }