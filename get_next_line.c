/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <almalfoy@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 18:06:40 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/10 19:46:38 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

char *recup_line(char *buf)
{
	int i;
	char *str;
	i = 0;
	while (*buf++ != '\n')
	{
		*str = *buf;
	}
	return (str);
}



int		get_next_line(const int fd, char **line)
{
	int				i;
	int				ret_read;
	static char		buf[BUF_SIZE + 1];

	i = 0;
	line = NULL;
	if (fd != 0)
		return (-1);
	while ((ret_read = read(fd, buf, BUF_SIZE)))
	{
		buf[ret_read] = '\0';
		while (*buf != '\n')
		{
			*line[i] = buf[i];
			i++;
		}
	}
	return (1);
}
