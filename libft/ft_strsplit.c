/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:02:08 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 11:02:09 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nb_word(const char *s, char c)
{
	int i;
	int word;

	word = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			i++;
		if (s[i - 1] != c)
			word++;
	}
	return (word);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		start;

	tab = NULL;
	i = 0;
	j = 0;
	if (s && (tab = (char **)malloc(sizeof(*tab) * (ft_nb_word(s, c) + 1))))
	{
		while (s[i])
		{
			while (s[i] && s[i] == c)
				i++;
			start = i;
			while (s[i] && s[i] != c)
				i++;
			if (i > start)
				tab[j++] = ft_strsub(s, start, (i - start));
		}
		tab[j] = NULL;
	}
	return (tab);
}
