/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:10:12 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 16:11:55 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*list = ft_lstnew("First element");
// 	t_list	*new = ft_lstnew("Second element");

// 	ft_lstadd_front(&list, new);
// 	while (list)
// 	{
// 		printf("%s\n", (char *)list->content);
// 		list = list->next;
// 	}
// 	return (0);
// }