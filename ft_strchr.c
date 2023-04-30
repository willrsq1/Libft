/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:24:16 by root              #+#    #+#             */
/*   Updated: 2022/10/24 19:24:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ss;

	ss = (char *)s;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return (&ss[i]);
		i++;
	}
	if (c == '\0')
		return (&ss[i]);
	return (NULL);
}
