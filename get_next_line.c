/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:37:23 by heolivei          #+#    #+#             */
/*   Updated: 2022/12/11 14:35:12 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*read_frase;
	static char	*frase;
	long int	i;
	int		j;
	int		k;

	read_frase = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	
	i = read(fd, read_frase, BUFFER_SIZE);
	read_frase[i + 1] = '\0';
	
	j = 0;
	while (read_frase[j] != '\n' && read_frase[j] != '\0')
	{
		j++;
	}

	frase = ft_strjoin(frase, read_frase);
	return (frase);
}
