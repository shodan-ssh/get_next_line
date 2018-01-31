/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <almalfoy@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 18:06:40 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/31 18:52:22 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

/* -------------------------------------------------------------------------*/
//|							Read qui prend directement stock_buf			 |
/* -------------------------------------------------------------------------*/

/*
char	*ft_read_stock(const int fd, char **stock_buf)
{
	int				ret_read;
	char			buf[BUFF_SIZE + 1];
	char			stock[999];

	*stock_buf = "";
	while ((ret_read = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret_read] = '\0';
		*stock_buf = ft_strjoin(*stock_buf, buf);
	}
	*stock_buf[ft_strlen(*stock_buf)] = '\0';
	return (*stock_buf);
}
*/

/*
int		get_next_line(const int fd, char **line)
{

	static int		i = 0;
	int				start;
	static char		*stock_buf;

	if (line == NULL || fd < 0 || BUFF_SIZE <= 0)
		return (-1);
	start = i;
	if (!(*line))
		stock_buf = ft_read_stock(fd, &stock_buf);
	while (stock_buf[i] != '\n' && stock_buf[i])
		i++;
	*line = ft_strsub(stock_buf, start, i - start);
	if (!(stock_buf[i]))
		return (0);
	i++;
	return (1);
}
*/

/* -------------------------------------------------------------------------*/
//|							Read qui return stock							 |
/* -------------------------------------------------------------------------*/

char	*ft_read_stock(const int fd)
{
	int				ret_read;
	char			buf[BUFF_SIZE + 1];
	char			*stock;

	stock = "";
	/*if (!(stock = (char *)malloc(sizeof(*stock) * (999))))
		return (0);*/
	while ((ret_read = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret_read] = '\0';
		stock = ft_strjoin(stock, buf);
	}
	stock[ft_strlen(stock)] = '\0';
	return (stock);
}

int		get_next_line(const int fd, char **line)
{

	static int		i = 0;
	int				start;
	static char		*stock_buf;

	if (line == NULL || fd < 0 || BUFF_SIZE <= 0)
		return (-1);
	start = i;
	if (!(*line))
		stock_buf = ft_read_stock(fd);
	while (stock_buf[i] != '\n' && stock_buf[i])
		i++;
	*line = ft_strsub(stock_buf, start, i - start);
	if (!(stock_buf[i]))
		return (0);
	i++;
	return (1);
}
