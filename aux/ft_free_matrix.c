/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:20:10 by marcnava          #+#    #+#             */
/*   Updated: 2024/12/10 18:23:06 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	ft_free_matrix(void **matrix)
{
	size_t	row;

	row = 0;
	while (matrix[row])
	{
		ft_free((void **)&(matrix[row]));
		row++;
	}
	ft_free((void **)&matrix);
}
