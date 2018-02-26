/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <almalfoy@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 18:06:40 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/26 17:34:02 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

/* -------------------------------------------------------------------------*/
//|						Read qui prend directement stock_buf			 	 |
/* -------------------------------------------------------------------------*/

int    ft_read_stock(const int fd, char **stock_buf)
{
	int				ret_read;
	int				i;
	int				not_empty;
	char			buf[BUFF_SIZE + 1];
	char			*tmp;

	i = 0;
	not_empty = 0;
	*stock_buf = ft_strnew(1);
	while ((ret_read = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret_read] = '\0';
		while (i < BUFF_SIZE && not_empty == 0)
		{
			if (buf[i] != '\0')
				not_empty++;
			i++;
		}
		i = 0;
		tmp = ft_strjoin(*stock_buf, buf);
		free(*stock_buf);
		*stock_buf = tmp;
	}
	printf("not_empty_1 = %d\n", not_empty);
	if (not_empty == 0)
		return (0);
	free(tmp);
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static int		i = 0;
	int				start;
	static char		*stock_buf;
	int				ret_read_stock;

	if (line == NULL || fd < 0 || BUFF_SIZE < 0)
		return (-1);
	start = i;
	if (!(*line))
	{
		if ((ft_read_stock(fd, &stock_buf) != 1))
			return (0);
		ret_read_stock = 1;
	}
	while (stock_buf[i] != '\n' && stock_buf[i])
	{
		i++;
		printf("i = %d\n", i);
	}
	printf("i - start = %d\n", (i - start));
	if ((i - start) > 0)
	{

		return (0);
	}
	*line = ft_strsub(stock_buf, start, i - start);
	i++;
	return (1);
}
