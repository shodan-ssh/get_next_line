/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <almalfoy@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 18:06:40 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/16 17:47:39 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"
/*
char	*recup_line(char *buf, char *line)
{
	char 	*str;
	int 	i;

	i = 0;
	while (*buf)
		if (buf[i] == '\n')
		{
			return (str)
		}
}
*/

int		ft_calc_size(char *buf)
{
	int size;

	size = 0;
	while (*buf++ != '\n')
	{
		size++;
	}
	printf("size before %d\n", size);
	return (size);
}

int		get_next_line(const int fd, char **line)
{
	int				ret_read;
	int				i;
	char			buf[BUF_SIZE + 1];
	static char		**str;

	i = 0;
	line = NULL;
	str = NULL;
	/*while (buf[i] != '\n')
	{
		ret_read = read(fd, buf + i, BUF_SIZE);
		i++;
	}
	printf("%s", buf);
	*/
	while ((ret_read = read(fd, buf, BUF_SIZE)))
	{
		buf[ret_read] = '\0';
//		if (!(line = (char **)malloc(sizeof(**line) * (ft_calc_size(buf)))))
//			return (-1);
		/*while (i < BUF_SIZE && ret_read != 0 && buf[i] != '\n')
		{

			i++;
		}
		i = 0;
	*/
	}
	//ft_putstr(*line);
	//ft_delim_line_break(buf, fd);
	//if (!(str = (char *)malloc(sizeof(*str) * ())))
	if (fd != 0)
		return (-1);
	return (1);
}
