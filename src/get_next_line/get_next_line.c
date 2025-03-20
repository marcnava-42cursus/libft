/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcnava <marcnava@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:48:08 by marcnava          #+#    #+#             */
/*   Updated: 2025/01/24 16:01:29 by marcnava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

void	ft_check_free(void **ptr)
{
	if (ptr != NULL && *ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
	}
}

static char	*ft_get_line_buffer(int fd, char *pending_line, char *buffer)
{
	ssize_t	bytes_read;
	char	*tmp;

	bytes_read = 1;
	tmp = NULL;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			ft_check_free((void **)&pending_line);
			return (pending_line);
		}
		else if (bytes_read == 0)
			break ;
		buffer[bytes_read] = 0;
		if (!pending_line)
			pending_line = ft_strdup("");
		tmp = pending_line;
		pending_line = ft_strjoin(tmp, buffer);
		ft_check_free((void **)&tmp);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (pending_line);
}

static char	*ft_get_eol(char *buffer)
{
	char	*pending_line;
	ssize_t	i;

	i = 0;
	while (buffer[i] != '\n' && buffer[i] != '\0')
		i++;
	if (buffer[i] == 0 || buffer[i + 1] == 0)
		return (NULL);
	pending_line = ft_substr(buffer, i + 1, ft_strlen(buffer) - 1);
	if (!pending_line)
		ft_check_free((void **)&pending_line);
	buffer[i + 1] = 0;
	return (pending_line);
}

char	*get_next_line(int fd)
{
	static char	*pending_line[MAX_FD];
	char		*line;
	char		*buffer;

	line = NULL;
	buffer = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
	{
		ft_check_free((void **)&pending_line[fd]);
		return (NULL);
	}
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	line = ft_get_line_buffer(fd, pending_line[fd], buffer);
	ft_check_free((void **)&buffer);
	if (!line)
		return (NULL);
	pending_line[fd] = ft_get_eol(line);
	return (line);
}
