/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_matrixes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 16:24:59 by marcnava          #+#    #+#             */
/*   Updated: 2025/06/29 21:19:01 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Frees multiple matrices of dynamically allocated memory.
 * @param first A pointer to the first matrix to be freed.
 * @details 
 * This function takes a variable number of arguments, each being a pointer 
 * to a dynamically allocated matrix (array of pointers). It iterates through 
 * the list of arguments and calls `ft_free_matrix` on each non-null matrix.
 * 
 * The function terminates when it encounters a `NULL` pointer in the argument
 * list.
 * 
 * @note All matrices passed to this function must be null-terminated arrays of
 *       pointers. The function expects a `NULL` at the end of the argument list
 *      to mark its termination.
 * 
 * @warning Passing non-null-terminated arrays or omitting the final `NULL` may
 *          result in undefined behavior.
 */
void	ft_free_matrixes(void **first, ...)
{
	va_list	args;
	void	**matrix;

	matrix = first;
	va_start(args, first);
	while (matrix)
	{
		ft_free_matrix(matrix);
		matrix = va_arg(args, void **);
	}
	va_end(args);
}
