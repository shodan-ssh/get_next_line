/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <almalfoy@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 18:06:40 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/11 17:17:09 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

/*void 	recup_line(char *buf, char *line)
{
	int i;

	i = 0;
	while (*buf++ != '\n')
	{
		line[i] = buf[i];
		i++;
	}
}*/



int		get_next_line(const int fd, char **line)
{
	int				ret_read;
//	char			*str;
	int				i;
	static char		buf[BUF_SIZE + 1];

	line = NULL;
	i = 0;
	while ((ret_read = read(fd, buf, BUF_SIZE)))
	{
		while (buf[i] != '\n')
			i++;
		buf[ret_read] = '\0';
		ft_putstr(buf);
	}
	//if (!(str = (char *)malloc(sizeof(*str) * ())))
	if (fd != 0)
		return (-1);
/*	while ((read(fd, buf, BUF_SIZE)))
	{
		recup_line(buf, *line);
	}
	while (read(fd, buf + i, BUF_SIZE) == 1)
	{
		if (buf[i] == '\n')
		{
			break;
		}
		i++;
	}
	*/
//	ft_putstr(buf);
	return (1);
}
