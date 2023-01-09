/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <heolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:39:48 by heolivei          #+#    #+#             */
/*   Updated: 2023/01/09 20:43:18 by heolivei         ###   ########.fr       */
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
	
	while (1)
	{	
		line = get_next_line(fd);
		if (!line)
			break;
		printf("%s", line);
		free(line);
	}
	//printf("%s",get_next_line(fd));
	close (fd);
	return (0);
}
