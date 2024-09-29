/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:49:27 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 17:31:02 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while ((*s != '\0') && (*s != (char)c))
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

// int	main(void)
// {
// 	char	*str = "Hello World";
// 	char	c = 'W';
// 	char	*ptr;

// 	ptr = ft_strchr(str, c);
// 	if (ptr)
// 		printf("'%c' found at position %ld\n", c, ptr - str);
// 	else
// 		printf("'%c' not found\n", c);
// 	return (0);
// }