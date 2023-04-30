/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:24:39 by root              #+#    #+#             */
/*   Updated: 2022/10/24 19:24:40 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ss;

	i = 0;
	ss = (char *)s;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if ((char) c == s[i])
			return (&ss[i]);
		i--;
	}
	return (NULL);
}
