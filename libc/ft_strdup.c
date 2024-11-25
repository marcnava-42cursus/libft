/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:14:18 by marcnava          #+#    #+#             */
/*   Updated: 2024/11/19 19:20:13 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s) + 1;
	if (!len)
		return (NULL);
	str = (char *)ft_calloc(len, sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s, len);
	return (str);
}
