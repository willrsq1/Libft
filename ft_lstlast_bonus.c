/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 01:24:55 by root              #+#    #+#             */
/*   Updated: 2022/10/31 01:24:56 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*previous;

	previous = NULL;
	if (lst == NULL)
		return (lst);
	while (lst)
	{
		previous = lst;
		lst = lst->next;
	}
	return (previous);
}
