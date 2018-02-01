/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 10:25:02 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 13:54:42 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (lst == NULL)
		return (NULL);
	tmp = f(lst);
	new = tmp;
	while ((*lst).next)
	{
		(*tmp).next = f((*lst).next);
		tmp = (*tmp).next;
		lst = (*lst).next;
	}
	return (new);
}
