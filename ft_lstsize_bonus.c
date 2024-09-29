/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:16:20 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 16:56:21 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*new;

// 	list = ft_lstnew("Hello");
// 	new = ft_lstnew("World");
// 	ft_lstadd_back(&list, new);
// 	printf("%d\n", ft_lstsize(list));
// 	return (0);
// }