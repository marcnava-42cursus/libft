/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:20:10 by marcnava          #+#    #+#             */
/*   Updated: 2025/06/29 21:19:01 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Frees a dynamically allocated matrix (array of pointers).
 * 
 * @param matrix A pointer to a null-terminated array of dynamically allocated
 *               pointers.
 * 
 * @details
 * This function iterates through the matrix, freeing each allocated row before 
 * freeing the matrix itself.
 * 
 * - The matrix must be a null-terminated array of pointers.
 * - Each element (`matrix[row]`) is assumed to be dynamically allocated and
 *   will 
 *   be freed using `ft_free`.
 * - Finally, the matrix itself is freed.
 * 
 * @note The function does nothing if `matrix` is NULL.
 * @warning The function expects `matrix` to be properly allocated. If `matrix`
 *          is an invalid pointer or not dynamically allocated, behavior is
 *          undefined.
 */
void	ft_free_matrix(void **matrix)
{
	size_t	row;

	if (!matrix)
		return ;
	row = 0;
	while (matrix[row])
	{
		ft_free((void **)&(matrix[row]));
		row++;
	}
	ft_free((void **)&matrix);
}
