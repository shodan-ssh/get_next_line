/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:58:56 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 10:58:58 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *s;
	char *a;
	char *b;

	a = (char *)s1;
	b = (char *)s2;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(s = (char *)malloc(sizeof(*s) * (ft_strlen(a) + ft_strlen(b) + 1))))
		return (NULL);
	s = ft_strcpy(s, (char *)s1);
	s = ft_strcat(s, (char *)s2);
	return (s);
}
