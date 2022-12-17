/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:37:23 by heolivei          #+#    #+#             */
/*   Updated: 2022/12/17 20:39:50 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	char	*read_frase;
	static char	*frase;
	long int	int_read;
	int		j;
	int		k;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	read_frase = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if(!read_frase)
		return (0);
	int_read = 1;
	if(!frase)
		frase = malloc(sizeof(char));
	j = 0;
	while (int_read != 0)
	{
		int_read = read(fd, read_frase, BUFFER_SIZE);
		read_frase[int_read] = '\0';
		frase = ft_strjoin(frase, read_frase);
		if (ft_strchr(read_frase, '\n'))
			break;
	}
	while (frase[j] != '\n')
		j++;
	
		while (frase[j] != '\0')
		{
			frase[j] = 0;
			j++;
		}
	return (frase);
}
