/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:22:04 by marcnava          #+#    #+#             */
/*   Updated: 2025/01/24 12:07:23 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	words;

	if (!s)
		return ((size_t) NULL);
	words = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			words++;
		while (*s != c && *s)
			s++;
	}
	return (words);
}

char	**ft_split(const char *s, char c)
{
	char	**s_split;
	size_t	row;
	size_t	len;

	if (!s)
		return (NULL);
	s_split = (char **)ft_calloc((ft_count_words(s, c) + 1), sizeof(*s_split));
	if (!s_split)
		return (NULL);
	row = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		len = 0;
		while (s[len] != c && s[len])
			len++;
		if (len)
			s_split[row] = ft_substr(s, 0, len);
		if (len && !s_split[row++])
			return (ft_free_matrix((void **)s_split), NULL);
		s += len;
	}
	s_split[row] = NULL;
	return (s_split);
}
