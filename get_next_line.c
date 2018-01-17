/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <almalfoy@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 18:06:40 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/17 17:41:40 by almalfoy    ###    #+. /#+    ###.fr     */
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
/*
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
*/
int		get_next_line(const int fd, char **line)
{
	int				ret_read;
	int				i;
	char			buf[BUF_SIZE + 1];
	static char		**str;

	i = 0;
	line = NULL;
	str = NULL;
	//if ((ret_read = read(fd, buf, BUF_SIZE)) == -1)
	//	return (-1);
	while ((ret_read = read(fd, buf, BUF_SIZE)))
	{
		buf[ret_read] = '\0';
		//ft_putstr(buf);
	}
	ft_putstr(buf);

	/*
	while (buf[i++] != '\n')
	{
		printf("%c", buf[i]);
	}*/
	/*
	while (line)
	{
		if (buf[i] == '\n')
			return (&str);
	}
	*/
	//ft_delim_line_break(buf, fd);
	//if (!(str = (char *)malloc(sizeof(*str) * ())))
	if (fd != 0)
		return (-1);
	return (1);
}
/*
static int		ft_read(char **str, int fd)
{
	int		ret;
	char	*s;
	char	buf[BUFF_SIZE + 1];

	if ((ret = read(fd, buf, BUFF_SIZE)) == -1)
		return (-1);
	buf[ret] = '\0';
	s = *str;
	*str = ft_strjoin(*str, buf);
	if (*s != 0)
		free(s);
	return (ret);
}

static int		ft_get_line(char **str, char **line, char *s)
{
	int		i;
	char	*join;

	i = 0;
	if (*s == '\n')
		i = 1;
	*s = 0;
	*line = ft_strjoin("", *str);
	if (i == 0 && ft_strlen(*str) != 0)
	{
		*str = ft_strnew(1);
		return (1);
	}
	else if (i == 0 && !(ft_strlen(*str)))
		return (0);
	join = *str;
	*str = ft_strjoin(s + 1, "");
	free(join);
	return (i);
}

int				get_next_line(int const fd, char **line)
{
	int			ret;
	char		*s;
	static char	*str;

	if (str == 0)
		str = "";
	if (!line || BUFF_SIZE < 1)
		return (-1);
	ret = BUFF_SIZE;
	while (line)
	{
		s = str;
		while (*s || ret < BUFF_SIZE)
		{
			if (*s == '\n' || *s == 0 || *s == -1)
				return (ft_get_line(&str, line, s));
			s++;
		}
		ret = ft_read(&str, fd);
		if (ret == -1)
			return (-1);
	}
	return (0);
}
*/
// ft_strjoin
// ft_strnew
