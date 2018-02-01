/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 11:01:57 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/02 11:48:20 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *word)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(word) == 0)
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (word[j] == str[i + j])
		{
			if (word[j + 1] == '\0')
			{
				return ((char *)str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
