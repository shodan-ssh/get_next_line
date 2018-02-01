/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <almalfoy@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 18:06:40 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/01 19:03:58 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

/* -------------------------------------------------------------------------*/
//|							Read qui prend directement stock_buf			 |
/* -------------------------------------------------------------------------*/

char	*ft_read_stock(const int fd, char **stock_buf)
{
	int				ret_read;
	char			buf[BUFF_SIZE + 1];
	char			*tmp;

	*stock_buf = ft_strnew(1);
	tmp = ft_strnew(1);
	while ((ret_read = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret_read] = '\0';
		tmp = ft_strjoin(*stock_buf, buf);
		free(stock_buf);
		*stock_buf = tmp;
	}
	*stock_buf[ft_strlen(*stock_buf)] = '\0';
	free(tmp);
	return (*stock_buf);
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
		stock_buf = ft_read_stock(fd, &stock_buf);
	while (stock_buf[i] != '\n' && stock_buf[i])
		i++;
	*line = ft_strsub(stock_buf, start, i - start);
	if (!(stock_buf[i]))
		return (0);
	i++;
	return (1);
}

/* -------------------------------------------------------------------------*/
//|							Read qui return stock							 |
/* -------------------------------------------------------------------------*/
/*
char	*ft_read_stock(const int fd)
{
	int				ret_read;
	char			buf[BUFF_SIZE + 1];
	char			*stock;
	char			*tmp;

	stock = ""; //ft_strnew(1);
	//tmp = ft_strnew(1);
	while ((ret_read = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret_read] = '\0';
		//printf("%s", buf);
		tmp = ft_strjoin(stock, buf);
		stock = tmp;
	}
	//tmp[ft_strlen(tmp)] = '\0';
	//stock = tmp;
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
*/
