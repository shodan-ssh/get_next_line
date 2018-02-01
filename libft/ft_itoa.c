/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 10:46:04 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 10:46:23 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_n(int n)
{
	int	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	n_bis;

	len = ft_len_n(n);
	n_bis = n;
	if (n < 0)
	{
		n_bis = n_bis * -1;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	len--;
	str[len] = n_bis % 10 + '0';
	while (n_bis /= 10)
	{
		len--;
		str[len] = n_bis % 10 + '0';
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
