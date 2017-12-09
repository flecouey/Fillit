/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 15:45:43 by flecouey          #+#    #+#             */
/*   Updated: 2017/12/09 21:05:17 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../fillit.h"

#define BUF_SIZE 4096

static size_t	ft_tablen(char **tab)
{
	size_t		i;

	i = 0;
	while (tab[i])
	{
		i++;
	}
	return (i);
}

static char		***ft_bufsplit(char *buf)
{
	int			i;
	char		***tab;
	char		**strsplit;

	i = 0;
	tab = NULL;
	strsplit = ft_strsplit(buf, '\n');
	if (!(tab = ft_memalloc(ft_tablen(strsplit))))
		return (NULL);
	while (strplit[i])
	{
		
		while (j < 4)
		{

		}
		i++;
	}
}

char			***ft_readfile(char *source_file)
{
	char		***tab;
	int			fd;
	int			len_read;
	char		buf[BUF_SIZE + 1];

	tab = NULL;
	fd = open(source_file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (NULL);
	}
	len_read = read(fd, buf, BUF_SIZE);
	buf[len_read] = '\0';
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (NULL);
	}
	if (!(tab = ft_bufsplit(buf))
		return (NULL);
	return (tab);
}
