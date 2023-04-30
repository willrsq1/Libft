/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:24:27 by root              #+#    #+#             */
/*   Updated: 2022/10/24 19:24:28 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int	i;
	int	len;
	int	n;

	n = (int) size;
	if (dest == NULL && n == 0)
		return (size);
	i = 0;
	len = ft_strlen(dest);
	n = n - len;
	if (n <= 0 && (int)size >= 0)
		return (ft_strlen(src) + size);
	while ((src[i] && i < n - 1) || ((int)size < 0 && src[i]))
	{
		dest[i + len] = src[i];
		i++;
	}
	dest[i + len] = '\0';
	return (len + ft_strlen(src));
}
