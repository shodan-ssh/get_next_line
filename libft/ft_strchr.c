/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:53:42 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 11:32:08 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s_bis;

	s_bis = (char *)s;
	i = 0;
	if (c == '\0')
		return (&s_bis[ft_strlen(s_bis)]);
	while (s_bis[i] != '\0')
	{
		if (c == s_bis[i])
			return (&s_bis[i]);
		else
			i++;
	}
	return (0);
}
