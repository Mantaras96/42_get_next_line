/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertmantaras <albertmantaras@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 21:10:38 by albertmanta       #+#    #+#             */
/*   Updated: 2022/02/18 01:22:58 by albertmanta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_file(int fd, char *statica)
{
	char	*str;
	int		read_bytes;

	str = malloc(sizeof (char) * (BUFFER_SIZE + 1));
	if (!str)
		return (NULL);
	read_bytes = 1;
	while (!ft_strchr(statica, '\n') && read_bytes != 0)
	{
		read_bytes = read(fd, str, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(str);
			return (NULL);
		}
		str[read_bytes] = '\0';
		statica = ft_strjoin(statica, str);
	}
	free (str);
	return (statica);
}

char	*ftgetline(char *arg1)
{
	int		i;
	char	*str;

	i = 0;
	if (!arg1[i])
		return (NULL);
	while (arg1[i] != '\n' && arg1[i])
		i++;
	str = malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (arg1[i] != '\n' && arg1[i])
	{
		str[i] = arg1[i];
		i++;
	}
	if (arg1[i] == '\n')
	{
		str[i] = '\n';
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ftgetstatic(char *arg1)
{
	int		i;
	int		x;
	int		size;
	char	*str;

	i = 0;
	x = 0;
	while (arg1[i] != '\n' && arg1[i])
		i++;
	if (!arg1[i])
	{
		free (arg1);
		return (NULL);
	}
	size = ft_strlen(arg1);
	size = size - i;
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	i++;
	while (arg1[i])
		str[x++] = arg1[i++];
	str[x] = '\0';
	free(arg1);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*temp;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	temp = read_file(fd, temp);
	if(!temp) {
		return (NULL);
	}
	line = ftgetline(temp);
	temp = ftgetstatic(temp);
	return (line);
}
