/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:24:43 by root              #+#    #+#             */
/*   Updated: 2022/10/24 19:24:44 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_trim_at_b(char const *s1, char const *set, int i, int j)
{
	while (set[j])
	{
		if (set[j] == s1[i])
		{
			i++;
			j = -1;
		}
		j++;
	}
	return (i);
}

int	ft_trim_extension(char const *str, char const *set, int i, int j)
{
	while (set[j])
	{
		if (str[i - 1] == set[j])
		{
			i--;
			j = -1;
		}
		j++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	j = 0;
	i = 0;
	i = ft_trim_at_b(s1, set, i, j);
	j = ft_trim_extension(s1, set, ft_strlen(s1), 0);
	if (j > 0)
	{
		str = malloc(sizeof(char) * (j - i) + 1);
		if (str == 0)
			return (NULL);
		ft_strlcpy(str, &s1[i], (size_t)(j - i + 1));
	}
	else
	{
		str = malloc(sizeof(char) * 1);
		if (str == 0)
			return (NULL);
		str[0] = '\0';
	}
	return (str);
}
