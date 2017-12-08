/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arrangement.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:19:29 by flecouey          #+#    #+#             */
/*   Updated: 2017/12/08 16:08:15 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include "../../fillit.h"

/*
** Retourne 1 si les blocs du tetrimino passe en parametre sont correctement agences.
** Retourne 0 sinon.
*/

size_t static   ft_linksnb(char **tetrimino, size_t line, size_t col)
{
	size_t		linksnb;
	size_t		i;
	size_t		j;

	linksnb = 0;
	i = line == 0 ? 0 : line - 1;
	j = col == 0 ? 0 : col - 1;
	while (i < line + 1 && i < 4)
	{
		if (tetrimino[i][col] == '#')
			linksnb++;
		i++;
	}
	while (j < col + 1 && j < 4)
	{
		if (tetrimino[line][j] == '#')
			linksnb++;
		j++;
	}
	return (linksnb);
}

int static		ft_isasquare(char **tetrimino, size_t line, size_t col)
{
	if (tetrimino[line][col + 1] == '#' && tetrimino[line + 1][col] == '#'
			&& tetrimino[line + 1][col + 1] == '#')
		return (1);
	return (0);
}

int				ft_check_arrangement(char **tetrimino)
{
	size_t		linksnb;
	size_t		line;
	size_t		col;

	linksnb = 0;
	line = 0;
	while (tetrimino[line])
	{
		col = 0;
		while (tetrimino[line][col])
		{
			if (tetrimino[line][col] == '#')
			{
				if (ft_isasquare(tetrimino, line, col))
					return (1);
				linksnb = linksnb + ft_linksnb(tetrimino, line, col);
			}
			col++;
		}
		line++;
	}
	return (linksnb == 6 ? 1 : 0);
}
