/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:14:18 by marcnava          #+#    #+#             */
/*   Updated: 2024/10/02 17:13:40 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s) + 1;
	if (!len)
		return (NULL);
	str = (char *)malloc(len);
	if (!str)
		return (NULL);
	ft_memcpy(str, s, len);
	return (str);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*dup;

// 	str = "Hello World";
// 	dup = ft_strdup(str);
// 	if (dup)
// 		printf("'%s' duplicated to '%s'\n", str, dup);
// 	else
// 		printf("Duplication failed\n");
// 	free(dup);
// 	return (0);
// }