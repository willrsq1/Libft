/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:24:37 by root              #+#    #+#             */
/*   Updated: 2022/10/24 19:24:38 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*ss1;

	ss1 = (char *)s1;
	j = 0;
	i = 0;
	if (s2[i] == '\0')
		return (ss1);
	while (i < n && s1[i])
	{
		if (s1[i] == s2[j])
		{
			while (s1[i + j] == s2[j] && (i + j) < n && s1[i + j])
				j++;
			if (s2[j] == '\0')
				return (&ss1[i]);
			else
				j = 0;
		}
		i++;
	}
	return (NULL);
}
