/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wruet-su <william.ruetsuquet@gmail.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:24:14 by root              #+#    #+#             */
/*   Updated: 2023/04/30 11:56:02 by wruet-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_split(char **tab, int lignes)
{
	int	i;

	i = -1;
	while (lignes && ++i < lignes)
		free(tab[i]);
	free(tab);
	tab = NULL;
}

static char	**ft_spliting(char **tab, char const *s, char c, int lignes)
{
	int	i;
	int	j;
	int	len;
	int	w;

	i = 0;
	j = 0;
	while (j < lignes)
	{
		w = -1;
		while (s[i] == c)
			i++;
		len = ft_strclen(&s[i], (int) c);
		tab[j] = (char *)malloc((len + 1) * sizeof(char));
		if (tab[j] == 0)
			return (ft_free_split(tab, j), tab = NULL, NULL);
		while (w++ < len - 1)
			tab[j][w] = s[i++];
		tab[j][w] = '\0';
		j++;
	}
	return (tab);
}

static int	ft_nb_lignes(char const *s, char c, int i)
{
	int	lignes;

	lignes = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != '\0')
		{
			lignes++;
			i++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	return (lignes);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		lignes;
	char	**tab;

	i = 0;
	if (s == NULL)
		return (NULL);
	lignes = ft_nb_lignes(s, c, i);
	tab = (char **)malloc((lignes + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	tab = ft_spliting(tab, s, c, lignes);
	if (tab == NULL)
		return (NULL);
	tab[lignes] = NULL;
	return (tab);
}
