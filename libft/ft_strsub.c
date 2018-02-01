/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:04:44 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 11:04:46 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = NULL;
	i = 0;
	if (s)
	{
		if (!(str = (char *)malloc(sizeof(*str) * (len + 1))))
			return (NULL);
		while (i < len && *s)
		{
			str[i] = s[start];
			i++;
			start++;
		}
	}
	if (s != NULL)
		str[i] = '\0';
	return (str);
}
