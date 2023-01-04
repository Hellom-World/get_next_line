/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <heolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:37:23 by heolivei          #+#    #+#             */
/*   Updated: 2023/01/04 13:31:00 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*liquid_line;
	static char	*brute_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	brute_line = ft_brute_line(fd, brute_line);
	if (!brute_line)
		return (0);
	liquid_line = ft_liquid_line(brute_line);
	brute_line = rest_line(brute_line);
	return (liquid_line);
}
char	*ft_brute_line(int fd, char *brute_line)
{
	char	*vleitura;
	int	nbl;

	vleitura = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!vleitura)
		return (0);
	nbl = 1;
	while (ft_strchr(brute_line, '\n') && nbl != 0)
	{
		nbl = read(fd, vleitura, BUFFER_SIZE);
		if (nbl == -1)
		{
			free(vleitura);
			return (0);
		}
		vleitura[nbl] = '\0';
		brute_line = strjoin(brute_line, vleitura);
	}
	free(vleitura);
	return (brute_line);
}

char	*ft_liquid_line(char *vs)
{
	int		i;
	char	*str;

	i = 0;
	if(!vs)
		return (0);

	while (vs[i] && vs[i] != '\n')
		i++;
	str = malloc(sizeof(char) * (i + 2));
	if(!str)
		return (0);

	i = 0;
	while (vs[i] && vs[i] != '\n')
	{
		str[i] = vs[i];
		i++;
	}

	if(vs[i] == '\n')
	{
		str[i] == '\n'; 
		i++;
	}

	str[i] = '\0';
	return (str);
}