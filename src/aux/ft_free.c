/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:25:24 by marcnava          #+#    #+#             */
/*   Updated: 2025/06/29 21:19:01 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Frees a dynamically allocated pointer and sets it to NULL.
 * 
 * @param ptr A pointer to a dynamically allocated memory address.
 * 
 * @details
 * This function safely deallocates the memory pointed to by `*ptr` using
 * `free()`, and then sets `*ptr` to `NULL` to prevent dangling pointers.
 * 
 * - If `ptr` is `NULL`, the function does nothing.
 * - If `*ptr` is `NULL`, the function does nothing.
 * - Otherwise, it frees the memory at `*ptr` and nullifies it.
 * 
 * @note This function is useful to avoid use-after-free errors by ensuring 
 *       that freed pointers are always set to `NULL`.
 * 
 * @warning `ptr` must be a valid double pointer (`void **`). Passing a direct 
 *          memory address (`void *`) will cause unintended behavior.
 */
void	ft_free(void **ptr)
{
	if (ptr != NULL && *ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
	}
}
