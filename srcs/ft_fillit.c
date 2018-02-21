/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 23:22:24 by flecouey          #+#    #+#             */
/*   Updated: 2018/02/21 20:28:53 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../fillit.h"

static int	ft_solver(char ***tab_input, char ***tab_output, int min_square, t_params params)
{
	params.j = 0
	if (params.i == params.nb_tetri)
	{
		return (1);
	}
	while (params.j < min_square)
	{
		params.k = 0;
		while (k < min_square)
		{
			if (ft_issafe(tab_input, tab_output, params) && ft_calcsquare(tab_output) <= min_square)
			{
				*tab_output = ft_placepiece(tab_input, tab_output, params)
				params
				if (ft_solver(tab_input, tab_output, min_square, params))
					return (1);
				*tab_output = ft_removepiece(tab_input, tab_output, i, j, k)
			}
			k++;
		}
		j++;
	}
	return (0);
}

char		**ft_fillit(char ***tab_input)
{
	char		***tab_output;
	int			i;
	int			min_square;
	int			nb_tetri;
	t_params	params;

	tab_output = &(ft_taballoc(void));
	params.i = 0;
	params.nb_tetri = ft_nbtetri(tab_input);
	min_square = ft_nextsquare(nb_tetri * 4);
	while (min_square < 26)
	{
		if (ft_solver(tab_input, tab_output, min_square, params))
			return (*tab_output); //tab_output est modifié par pointeur dans ft_solver;
		min_square++;
	}
	return (*tab_output);
}
