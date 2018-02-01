/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 14:09:21 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 13:53:40 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	const *content, size_t content_size)
{
	t_list *list;

	if (!(list = (t_list *)malloc(sizeof(*list))))
		return (NULL);
	if (!((*list).content = ft_memalloc(content_size)))
		return (NULL);
	if (content == NULL)
	{
		(*list).content = NULL;
		(*list).content_size = 0;
	}
	else
	{
		if (!(ft_memcpy(((*list).content), (void *)content, content_size)))
			return (NULL);
		(*list).content_size = content_size;
	}
	(*list).next = NULL;
	return (list);
}
