/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:50:22 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 11:22:40 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src_bis;
	char	*dst_bis;
	size_t	i;

	i = 0;
	src_bis = (char *)src;
	dst_bis = (char *)dst;
	if (src_bis < dst_bis)
		while ((int)(--len) >= 0)
			*(dst_bis + len) = *(src_bis + len);
	else
		while (i < len)
		{
			*(dst_bis + i) = *(src_bis + i);
			i++;
		}
	return (dst);
}
