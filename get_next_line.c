/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <almalfoy@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 18:06:40 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2018/03/02 18:04:13 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

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
		while (i < BUFF_SIZE)// && not_empty == 0)
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
	if (not_empty == 0)
		return (0);
	free(tmp);
	return (1);
}

int    ft_size(const int fd)
{
	int		ret_read;
	char	buf[BUFF_SIZE + 1];
	char	*stock_buf;
	//char	*tmp;

	stock_buf = ft_strnew(1);
	while ((ret_read = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret_read] = '\0';
		stock_buf = ft_strjoin(stock_buf, buf);
		//printf("tmp = %zu\n", ft_strlen(tmp));
		//free(stock_buf);
		//stock_buf = tmp;
	}
	free(stock_buf);
	printf("stock_buf = %zu\n", ft_strlen(stock_buf));
	return (ft_strlen(stock_buf));
}

int		get_next_line(const int fd, char **line)
{
	static int		i = 0;
	int				start;
	static char		*stock_buf;
	static int		len_file = 0;

	if (line == NULL || fd < 0 || BUFF_SIZE < 0)
		return (-1);
	start = i;
	if (!(*line))
	{
		len_file = ft_size(fd);
		if ((ft_read_stock(fd, &stock_buf) != 1))
		{
			printf("Lecture file reussi\n");
			return (0);
		}
	}
	while (stock_buf[i] != '\n' && stock_buf[i])
		i++;
	*line = ft_strsub(stock_buf, start, i - start);
	i++;
	//printf("i = %d\nlen_file = %d\n\n", i, len_file);
	if (i >= len_file)
		return (0);
	return (1);
}
