/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:37:23 by heolivei          #+#    #+#             */
/*   Updated: 2022/12/09 14:51:30 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



char	*get_next_line(int fd)
{
	char	*read_frase;
	static char	*frase;
	long int	i;

	read_frase = 
	i = read(fd, read_frase, BUFFER_SIZE);
	
	printf("Quantidade de byte lido(retorno do read()) = %li \n", i);

	frase = read_frase;
	return (frase);
}
