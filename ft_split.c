/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:47:40 by marcnava          #+#    #+#             */
/*   Updated: 2024/10/01 19:02:06 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	j;
	size_t	k;

	if (!s)
		return (NULL);
	strs = (char **)ft_calloc(ft_strlen(s) + 1, sizeof(char *));
	if (!strs)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		k = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > k)
			strs[j++] = ft_substr(s, k, i - k);
	}
	return (strs);
}

// int	main(void)
// {
// 	char	**strs;
// 	size_t	i;
// 	char	*s = "Hola que tal estas";
// 	strs = ft_split(s, ' ');
// 	i = 0;
// 	while (strs[i])
// 	{
// 		printf("%s\n", strs[i]);
// 		i++;
// 	}
// 	return (0);
// }
