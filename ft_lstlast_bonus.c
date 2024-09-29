/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:17:29 by marcnava          #+#    #+#             */
/*   Updated: 2024/09/29 16:55:52 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*new;

// 	list = ft_lstnew("Hello");
// 	new = ft_lstnew("World");
// 	ft_lstadd_back(&list, new);
// 	printf("%s\n", (char *)ft_lstlast(list)->content);
// 	return (0);
// }