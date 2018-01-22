/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: almalfoy <almalfoy@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/28 18:06:57 by almalfoy     #+#   ##    ##    #+#       */
/*   Updated: 2018/01/22 18:45:01 by almalfoy    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
#include "libft/libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define BUFF_SIZE 1

int		get_next_line(const int fd, char **line);
#endif
