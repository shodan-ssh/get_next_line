/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <almalfoy@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 18:06:40 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/10 19:53:58 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

char *recup_line(char *buf, char *line)
{
	int i;

	i = 0;
	while (*buf++ != '\n')
	{
		line[i] = buf[i];
		i++;
	}
	return (str);
}



int		get_next_line(const int fd, char **line)
{
	int				ret_read;
	char			*str;
	static char		buf[BUF_SIZE + 1];

	line = NULL;
	if (!(str = (char *)malloc(sizeof(*str) * )))
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
