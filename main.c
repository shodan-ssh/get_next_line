/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <almalfoy@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 14:27:05 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/10 19:15:49 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"
#define BUFF_SIZE 21
#include <stdio.h>

int		main(int argc, char **argv)
{
	int fd;
	char *line;

	(void)argc;
	(void)argv;
	fd = 0;
	printf("%d", get_next_line(fd, &line));
	printf("%s", line);
	return (0);
}
