/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:18:12 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 17:32:41 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] && s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n && ((s1[i] == '\0' && s2[i] != '\0')
			|| (s1[i] != '\0' && s2[i] == '\0')))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

// int	main(void)
// {
// 	char	*str1 = "Hello World";
// 	char	*str2 = "Hello World";
// 	int		n;

// 	n = 5;
// 	printf("'%s' vs '%s' with n = %d: %d\n", str1, str2, n,
// 	ft_strncmp(str1, str2, n));
// 	n = 6;
// 	printf("'%s' vs '%s' with n = %d: %d\n", str1, str2, n,
// 	ft_strncmp(str1, str2, n));
// 	n = 11;
// 	printf("'%s' vs '%s' with n = %d: %d\n", str1, str2, n,
// 	ft_strncmp(str1, str2, n));
// 	n = 12;
// 	printf("'%s' vs '%s' with n = %d: %d\n", str1, str2, n,
// 	ft_strncmp(str1, str2, n));
// 	return (0);
// }