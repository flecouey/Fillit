/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 15:45:43 by flecouey          #+#    #+#             */
/*   Updated: 2018/01/27 12:51:22 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../fillit.h"

#define BUF_SIZE 4096

static size_t	ft_tablen(char **tab) // retourne le nombre de string dans le tableau, pratique
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
	fd = open(source_file, O_RDONLY); // on ouvre
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (NULL);
	}
	len_read = read(fd, buf, BUF_SIZE); // lecture du fichier : read renvoie la longueur lue 
	buf[len_read] = '\0'; // on met /0 le dernier du tab 
	if (close(fd) == -1) // close renvoie -1 si il arrive pas a fermer le fichier, c est juste par precaution a mon avis ca arrivera jamais (mais ils font ca dans le tuto ^^)
	{
		ft_putstr("close() failed\n");
		return (NULL);
	}
	if (!(tab = ft_bufsplit(buf))
		return (NULL);
	return (tab);
}
