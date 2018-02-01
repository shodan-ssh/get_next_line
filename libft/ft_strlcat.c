/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:59:09 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 11:36:20 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (j < size && dst[j])
		j++;
	while (src[i] && (j + i) + 1 < size)
	{
		dst[j + i] = src[i];
		i++;
	}
	if (i + j < size)
		dst[i + j] = '\0';
	return (ft_strlen(src) + j);
}
