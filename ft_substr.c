/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:22:24 by marcnava          #+#    #+#             */
/*   Updated: 2024/10/02 17:12:42 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s) < start + len)
		len = ft_strlen(s) - start;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (0);
	i = 0;
	while (i < len || (start + i) < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// int	main(void)
// {
// 	char	*str = "Hello World";
// 	char	*sub;

// 	sub = ft_substr(str, 6, 5);
// 	if (sub)
// 		printf("'%s' substring from 6 to 5: '%s'\n", str, sub);
// 	else
// 		printf("Substring failed\n");
// 	free(sub);
// 	return (0);
// }