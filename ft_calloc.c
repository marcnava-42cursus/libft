/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:13:49 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 16:13:43 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int	main(void)
// {
// 	size_t	count = 5;
// 	size_t	size = 4;
// 	char	*ptr = (char *)ft_calloc(count, size);

// 	if (!ptr)
// 	{
// 		printf("Memory allocation failed\n");
// 		return (1);
// 	}
// 	printf("Memory allocated successfully\n");
// 	free(ptr);
// 	return (0);
// }