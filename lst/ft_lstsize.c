/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:16:20 by marcnava          #+#    #+#             */
/*   Updated: 2024/11/19 19:19:03 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cont;

	cont = 0;
	while (lst)
	{
		lst = lst->next;
		cont++;
	}
	return (cont);
}
