/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <almalfoy@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 18:06:40 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/25 18:46:28 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

// ft_strjoin
// ft_strnew
// ft_strsub -> Alloue avec malloc un troncon de chaine

					/* Instruction GNL */

// Var tmp en static qui stock le fichier

char	*ft_read_stock(const int fd)
{
	int				ret_read;
	char			buf[BUFF_SIZE + 1];
	char			*stock;

	stock = "";
	while ((ret_read = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret_read] = '\0';
		stock = ft_strjoin(stock, buf);
	}
	stock[ft_strlen(stock)] = '\0';
	printf("size = %zu\n", ft_strlen(stock));
	return (stock);
}

int		get_next_line(const int fd, char **line)
{

	static int		i = 0;
	int				start;
	static char		*stock_buf;

	start = i;
	if (!(*line))
		stock_buf = ft_read_stock(fd);
	//printf("%s", stock_buf);
	while (stock_buf[i] != '\n' && stock_buf[i])
		i++;
	*line = ft_strsub(stock_buf, start, i - start);
	i++;

	return (1);
}
