/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:01:39 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 11:01:40 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (*s2 == '\0')
		return ((char*)s1);
	i = ft_strlen(s2);
	while (*s1 != '\0' && n-- >= i)
	{
		if (*s1 == *s2 && ft_memcmp((char *)s1, (char *)s2, i) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
