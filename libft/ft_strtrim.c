/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:12:24 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 11:12:26 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen((char *)(s)) - 1;
	while (s[i] == 32 || s[i] == '\t' || s[i] == '\n')
		i++;
	if (s[i] == '\0')
		return (ft_strdup((char *)s + i));
	while (s[j] == 32 || s[j] == '\t' || s[j] == '\n')
		j--;
	return (ft_strsub(s, i, j - i + 1));
}
