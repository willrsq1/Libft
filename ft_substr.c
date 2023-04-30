/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:24:45 by root              #+#    #+#             */
/*   Updated: 2022/10/24 19:24:46 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (s == NULL)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start >= ft_strlen(s))
	{
		sub = malloc(sizeof(char) * 1);
		if (sub == 0)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	if (start + len > ft_strlen(s))
		len = len - start;
	sub = malloc(sizeof(char) * (len) + 1);
	if (sub == 0)
		return (NULL);
	ft_strlcpy(sub, &s[start], len + 1);
	return (sub);
}
