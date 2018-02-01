/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:49:04 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 11:21:22 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_bis;
	char	*src_bis;
	size_t	i;

	i = 0;
	dst_bis = dst;
	src_bis = (char *)src;
	while (i < n)
	{
		dst_bis[i] = src_bis[i];
		i++;
	}
	return (dst_bis);
}
