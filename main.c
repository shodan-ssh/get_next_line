/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <almalfoy@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 14:27:05 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/22 18:16:14 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int fd;
	char *line;

	(void)argc;
	(void)argv;
	fd = 0;
	printf("retour gnl -> %d\nline -> %s\n", get_next_line(fd, &line), line);
	return (0);
}
