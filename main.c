/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:39:48 by heolivei          #+#    #+#             */
/*   Updated: 2022/12/08 18:55:38 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	FILE	*file;
	int	fd;

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("Nao foi possivel ler o arquivo");
		exit (0);
	}
	printf("\n %i", fd);

	close (fd);
	return (0);
}
