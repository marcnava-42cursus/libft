/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:21:12 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 16:53:44 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*new;

// 	list = ft_lstnew("Hello");
// 	new = ft_lstnew("World");
// 	ft_lstadd_back(&list, new);
// 	ft_lstdelone(list, free);
// 	return (0);
// }