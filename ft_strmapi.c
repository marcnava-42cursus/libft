/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:49:20 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/30 20:50:01 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new;

	if (!s || !f)
		return (NULL);
	new = (char *)malloc((sizeof(char)) * ft_strlen((char *)s) + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

// int	main(void)
// {
// 	char	*str = "Hello World";
// 	char	*new;

// 	new = ft_strmapi(str, ft_toupper);
// 	if (new)
// 		printf("'%s' mapped to '%s'\n", str, new);
// 	else
// 		printf("Mapping failed\n");
// 	free(new);
// 	return (0);
// }