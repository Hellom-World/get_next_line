/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:39:48 by heolivei          #+#    #+#             */
/*   Updated: 2022/12/17 20:36:15 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{	
	char	*s;
	char	*line;
	int	fd;
	int	i;
	
	fd = open("test.txt", O_RDONLY);
	i = 1;
	while (1)
	{
		line = get_next_line(fd);
		printf("%s", line);
		if (!line)
			break ;
		free(line);
		i++;
	}
	close (fd);
	return (0);
}
