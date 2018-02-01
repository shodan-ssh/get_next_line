/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:48:11 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 11:10:51 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_bis;
	unsigned char	c_bis;
	size_t			i;

	i = 0;
	s_bis = (unsigned char *)s;
	c_bis = (unsigned char)c;
	while (i < n)
	{
		if (s_bis[i] == c_bis)
		{
			return (&s_bis[i]);
		}
		else
			i++;
	}
	return (0);
}
