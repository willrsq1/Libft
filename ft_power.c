/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:24:12 by root              #+#    #+#             */
/*   Updated: 2022/10/24 19:24:13 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_power(int nb, unsigned int power)
{
	int	nb2;

	nb2 = nb;
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * nb2;
		power--;
	}
	return (nb);
}
