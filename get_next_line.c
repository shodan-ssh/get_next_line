/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <almalfoy@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 18:06:40 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/22 18:47:29 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"

// ft_strjoin
// ft_strnew -> retourne une chaine fraiche avec


					/* Instruction get_next_line */

/* 1 - Lire l'entree standard
   2 - Stocker jusqu'au '/n' dans *str
   3 - strjoin *line ("") avec *strjoin
   4 - strlen de str pour repartir de la ou on en etait
*/
/*
char	*ft_annihilation(char *stock_buf, char **line, int i)
{
	while (stock_buf[i])
	{
		if (stock_buf[i] == '\n')
		{
			*line = stock_buf;
			return (&**line);
		}
	}
	return (stock_buf);
}
*/
int		get_next_line(const int fd, char **line)
{
	int				ret_read;
	static int		i;
	char			buf[BUFF_SIZE + 1];
	char			*tmp;
	static char		*stock_buf;

	i = 0;
	stock_buf = "";
	tmp = NULL;

	while ((ret_read = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret_read] = '\0';
		stock_buf = ft_strjoin(stock_buf, buf); // Stock tout le buf dans la var static
	}
	stock_buf[ft_strlen(stock_buf)] = '\0';
	tmp = ((char *)malloc(sizeof(*tmp) * (ft_strlen(stock_buf) + 1)));
	printf("%zu caracteres dans le fichier\n", ft_strlen(stock_buf));
	ft_putstr(stock_buf);
	while (stock_buf[i] != '\n')
	{
		//*line[i] = stock_buf[i];
		tmp[i] = stock_buf[i];
		i++;
	}
	tmp[i] = '\0';
	i++;
	*line = tmp;
	//printf("tmp -> %s\n", tmp);
	return (1);
}
