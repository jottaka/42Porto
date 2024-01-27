/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:02:42 by josfreit          #+#    #+#             */
/*   Updated: 2023/12/27 15:02:43 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_update_str(char *str)
{
	int		i;
	int		j;
	char	*newstr;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (0);
	}
	newstr = (char *)malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!newstr)
		return (0);
	i++;
	j = 0;
	while (str[i])
		newstr[j++] = str[i++];
	newstr[j] = '\0';
	free(str);
	return (newstr);
}

char	*ft_get_line(char *str)
{
	int		i;
	char	*newstr;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	newstr = (char *)malloc(sizeof(char) * (i + 2));
	if (!newstr)
		return (0);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		newstr[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

char	*ft_read_str(int fd, char *str)
{
	char	*buffer;
	int		byte;

	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (0);
	byte = 1;
	while (!ft_strchr(str, '\n') && byte != 0)
	{
		byte = read(fd, buffer, BUFFER_SIZE);
		if (byte == -1)
		{
			free(buffer);
			free(str);
			return (0);
		}
		buffer[byte] = '\0';
		str = ft_strjoin(str, buffer);
	}
	free(buffer);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str[FD_SIZE];
	char		*line;

	if (BUFFER_SIZE < 1 || fd < 0 || fd > FD_SIZE)
		return (0);
	str[fd] = ft_read_str(fd, str[fd]);
	if (!str[fd])
		return (0);
	line = ft_get_line(str[fd]);
	str[fd] = ft_update_str(str[fd]);
	return (line);
}
