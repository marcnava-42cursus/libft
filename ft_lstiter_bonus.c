/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:44:02 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 16:53:54 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*new;

// 	list = ft_lstnew("Hello");
// 	new = ft_lstnew("World");
// 	ft_lstadd_back(&list, new);
// 	ft_lstiter(list, &ft_putstr_fd);
// 	return (0);
// }