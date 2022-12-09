/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:39:48 by heolivei          #+#    #+#             */
/*   Updated: 2022/12/09 13:39:36 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	char	*line;
	int	fd;

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("Nao foi possivel ler o arquivo");
		exit (0);
	}
	line = get_next_line(fd);

		printf("Retorno do get_next_line: %s",line);

	close (fd);
	return (0);
}
