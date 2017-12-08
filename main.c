/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 22:23:44 by flecouey          #+#    #+#             */
/*   Updated: 2017/12/08 13:53:05 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

/*
** tab_input : chaque case du tableau contient un tetrimino forme a partir de strsplit.
** tab_output : tableau de chaines de caracteres representant l'affichage final.
*/

int		main(int argc, char **argv)
{
	char	***tab_input;
	char	**tab_output;

	if (argc != 1)
	{
		ft_putstr("usage : ./fillit source_file\n");
		return (0);
	}
	tab_input = ft_readfile(argv[1]);
	if (!ft_isvalid(tab_input))
	{
		ft_putstr("error\n")
		return (0);
	}
	tab_output = ft_fillit(tab_input);
	ft_printoutput(tab_output);
	return (0);
}