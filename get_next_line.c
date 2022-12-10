/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:37:23 by heolivei          #+#    #+#             */
/*   Updated: 2022/12/10 15:10:08 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*read_frase;
	static char	*frase;
	long int	i;

	read_frase = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	i = read(fd, read_frase, BUFFER_SIZE);
	read_frase[i + 1] = '\0';
	printf("Quantidade de byte lido(retorno do read()) = %li \n", i);
	printf("buff do read = %s \n", read_frase);
	printf("Static frase %s \n", frase);
	frase = ft_strjoin(frase, read_frase);
	return (frase);
}
