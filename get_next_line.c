/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:37:23 by heolivei          #+#    #+#             */
/*   Updated: 2022/12/14 20:58:43 by heolivei         ###   ########.fr       */
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
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	read_frase = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if(!read_frase)
		return (0);
		
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
