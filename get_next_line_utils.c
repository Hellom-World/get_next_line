/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:37:38 by heolivei          #+#    #+#             */
/*   Updated: 2022/12/11 14:44:46 by heolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	size_t	i;
	
	i = 0;
       	if(!s)
		return (0);	
	while (s[i] != '\0')
		i++;

	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	k;
	printf("%i \n", ft_strlen(s1));
	printf("%i \n", ft_strlen(s2));
	printf("%s \n", s2);

	i = 0;
	k = 0;
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	
	printf("%c", s2[i]);
	if (s1)
	{
		while (s1[i] != '\0')
		{
			str[i] = s1[i];
			i++;
		}
	}
		while (s2[k] != '\0')
		{
			str[i] = s2[k];
			i++;
			k++;
		}
	str[i] = '\0';
	printf("%s \n", str);
	return (str);
}
