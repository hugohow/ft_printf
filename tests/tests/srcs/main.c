/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhow-cho <hhow-cho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 21:34:44 by jkettani          #+#    #+#             */
/*   Updated: 2019/04/30 18:23:12 by hhow-cho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "frmk_libunit.h"
#include "main.h"
#include "tests.h"

int		main(int ac, char **av)
{
	unsigned int	i;
	unsigned int	j;
	int				err;
	int				fd;
	int				fd_trace;

	fd = STDOUT_FILENO;
	fd_trace = get_fd(TRACE_FILE, OUTPUT_MODE, OP_TRUNC);
	print_header_fd(fd);
	if (fd_trace != fd)
		print_trace_header_fd(fd_trace);
	err = 0;
	if (ac == 1)
	{
		i = 0;
		while (strcmp(g_launchtab[i].fct_name, ""))
		{
			if ((err = (g_launchtab[i++].launcher)()) > 0)
				print_error_fd(err, fd);
			dprintf(fd, "\n");
		}
	}
	else
	{
		i = 0;
		while (av[i])
		{
			j = 0;
			while (strcmp(g_launchtab[j].fct_name, ""))
			{
				if (!strcmp(g_launchtab[j].fct_name, av[i]))
				{
					if ((err = (g_launchtab[j].launcher)()) > 0)
						print_error_fd(err, fd);
					dprintf(fd, "\n");
					break ;
				}
				j++;
			}
			i++;
		}
	}
	return (err);
}
