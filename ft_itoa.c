/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:23:58 by root              #+#    #+#             */
/*   Updated: 2022/10/24 19:23:59 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_min_int(void)
{
	char	*str;

	str = malloc(sizeof(char) * 12);
	if (str == 0)
		return (NULL);
	str[0] = '-';
	str[1] = '2';
	str[2] = '1';
	str[3] = '4';
	str[4] = '7';
	str[5] = '4';
	str[6] = '8';
	str[7] = '3';
	str[8] = '6';
	str[9] = '4';
	str[10] = '8';
	str[11] = '\0';
	return (str);
}

char	*ft_itoa_part_2(char *str, int n, int i, int nb2)
{
	if (n < 0)
	{
		n = n * -1;
		str[nb2] = '-';
		nb2++;
	}
	if (n == 0)
	{
		str[0] = 48;
		str[1] = '\0';
		return (str);
	}
	while (i > 0)
	{
		str[nb2] = n / ft_power(10, i - 1) + 48;
		nb2++;
		n = n - ((n / ft_power(10, i - 1)) * ft_power(10, i - 1));
		i--;
	}
	str[nb2] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		nb2;
	int		i;

	i = 0;
	nb2 = n;
	if (n == -2147483648)
		return (ft_min_int());
	if (nb2 < 0)
	{
		nb2 = nb2 * -1;
	}
	while (nb2 > 0)
	{
		nb2 = nb2 / 10;
		i++;
	}
	if (n <= 0)
		str = malloc((sizeof(char)) * (i + 2));
	else
		str = malloc((sizeof(char)) * (i + 1));
	if (str == 0)
		return (NULL);
	str = ft_itoa_part_2(str, n, i, nb2);
	return (str);
}
