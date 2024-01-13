/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 23:03:30 by prmarott          #+#    #+#             */
/*   Updated: 2024/01/13 23:17:41 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	free_ptr(char **ptr)
{
	free(*ptr);
	*ptr = NULL;
}

void	get_content(int fd, char **content)
{
	char		*buffer;
	char		*tmp;
	ssize_t		bytes_read;

	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buffer)
		return (free_ptr(content));
	buffer[BUFFER_SIZE] = '\0';
	while (!ft_strchr(*content, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free_ptr(content), free(buffer), free(tmp));
		buffer[bytes_read] = '\0';
		if (bytes_read == 0)
			return (free(buffer));
		tmp = ft_strjoin(*content, buffer);
		if (!tmp)
			return (free(buffer), free_ptr(content));
		*content = tmp;
	}
	free(buffer);
}

char	*get_line(char *content)
{
	char	*nl_pos;
	char	*line;

	nl_pos = ft_strchr(content, '\n');
	if (!nl_pos)
	{
		line = ft_strdup(content);
		if (!line)
			return (NULL);
		return (line);
	}
	line = ft_substr(content, 0, nl_pos - content + 1);
	if (!line)
		return (NULL);
	return (line);
}

void	free_content(char **content)
{
	char	*nl_pos;
	char	*tmp;

	nl_pos = ft_strchr(*content, '\n');
	if (!nl_pos || ft_strlen(nl_pos + 1) == 0)
		return (free_ptr(content));
	tmp = ft_strdup(nl_pos + 1);
	if (!tmp)
		return (free_ptr(content));
	free_ptr(content);
	*content = tmp;
}

char	*get_next_line(int fd)
{
	static char	*content[1025] = {NULL};
	char		*line;

	if (fd < 0 || fd > 1024 || BUFFER_SIZE <= 0 || read(fd, 0, 0) == -1)
	{
		free_ptr(&content[fd]);
		return (NULL);
	}
	line = NULL;
	get_content(fd, &content[fd]);
	if (!content[fd])
		return (NULL);
	line = get_line(content[fd]);
	if (!line)
	{
		free_ptr(&content[fd]);
		return (NULL);
	}
	free_content(&content[fd]);
	return (line);
}
