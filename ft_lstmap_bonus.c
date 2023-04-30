/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 01:24:57 by root              #+#    #+#             */
/*   Updated: 2022/10/31 01:24:58 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*returned;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	if (new_list == NULL)
		return (NULL);
	returned = new_list;
	lst = lst->next;
	while (lst)
	{
		new_list = ft_lstnew(f(lst->content));
		if (new_list == NULL)
			return (NULL);
		ft_lstadd_back(&returned, new_list);
		if (lst == NULL)
			del(lst->content);
		lst = lst->next;
	}
	return (returned);
}
