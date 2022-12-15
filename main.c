/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:39:48 by heolivei          #+#    #+#             */
/*   Updated: 2022/12/15 16:56:43 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{	
	char	*s;
	char	*line;
	int	fd;
	
	fd = open("test.txt", O_RDONLY);
	line = get_next_line(fd);
	
		printf("Retorno do get_next_line: %s \n",line);

	close (fd);
	return (0);
}
