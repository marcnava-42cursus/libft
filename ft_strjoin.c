/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:05:31 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 17:31:42 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	join = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!join)
		return (0);
	i = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		join[i + j] = s2[j];
		j++;
	}
	join[i + j] = '\0';
	return (join);
}

// int	main(void)
// {
// 	char	*str1 = "Hello ";
// 	char	*str2 = "World";
// 	char	*join;

// 	join = ft_strjoin(str1, str2);
// 	if (join)
// 		printf("'%s' + '%s' = '%s'\n", str1, str2, join);
// 	else
// 		printf("Join failed\n");
// 	free(join);
// 	return (0);
// }