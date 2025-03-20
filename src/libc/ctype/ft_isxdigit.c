/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:53:29 by marcnava          #+#    #+#             */
/*   Updated: 2025/03/20 17:12:35 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/libft.h"

int	ft_isxdigit(int c)
{
	const char	*lower = "abcde";
	const char	*upper = "ABCDE";

	return (ft_isdigit(c) || ft_strchr(lower, c) || ft_strchr(upper, c));
}
