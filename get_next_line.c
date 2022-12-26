/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:37:23 by heolivei          #+#    #+#             */
/*   Updated: 2022/12/26 19:28:09 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*liquid_line;
	static char	*brute_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	brute_line = ft_brute_line(fd, brute_line)
	if (!brute_line)
		return (0);
	liquid_line = ft_liquid_line(brute_line)
	brute_line = rest_line(brute_line);
	return (liquid_line);
}
char	*ft_brute_line(int fd, char *brute_line)
{
	char	*vl;
	int	nbl;

	vl = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!vl)
		return (0);
	nbl = 1;
	while (ft_strchr(brute_line, '\n') && brute_line != '\0')
	{
		nbl = read(fd, vl, BUFFER_SIZE)
	}
}
