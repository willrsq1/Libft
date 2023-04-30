/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 01:24:48 by root              #+#    #+#             */
/*   Updated: 2022/10/31 01:24:49 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*first;

	if (lst != NULL && del != NULL)
	{
		first = *lst;
		while (first)
		{
			*lst = first->next;
			del(first->content);
			free(first);
			first = *lst;
		}
		*lst = NULL;
	}
}
