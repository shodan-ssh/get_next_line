/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:48:26 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 11:19:39 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*dst_bis;
	char	*src_bis;
	size_t	i;

	i = 0;
	dst_bis = (char *)dst;
	src_bis = (char *)src;
	while (i < n)
	{
		dst_bis[i] = src_bis[i];
		if ((char)c == src_bis[i])
			return (dst_bis + i + 1);
		i++;
	}
	return (NULL);
}
