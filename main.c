/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <almalfoy@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/02 14:27:05 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/25 18:39:52 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	int fd;
	int i;
	char *line;
	(void)argc;
	(void)argv;
	i = 0;

	fd = open(argv[1], O_RDONLY);
	printf("fd = %d\n", fd);
	printf("retour gnl -> %d\nline -> %s\n", get_next_line(fd, &line), line);
	printf("retour gnl -> %d\nline -> %s\n", get_next_line(fd, &line), line);
	printf("retour gnl -> %d\nline -> %s\n", get_next_line(fd, &line), line);
	printf("retour gnl -> %d\nline -> %s\n", get_next_line(fd, &line), line);
	return (0);
}
