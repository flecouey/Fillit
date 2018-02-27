/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 23:12:08 by flecouey          #+#    #+#             */
/*   Updated: 2018/02/27 21:50:16 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FILLIT_H
# define _FILLIT_H

# define MAX(a, b) a > b ? a : b

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_params
{
	int			nb_tetri;
	int			min_square;
	int			i;
	int			j;
	int			k;
}				t_params;

typedef struct	s_issafe
{
	int			j_in;
	int			j_out;
	int			k_in;
	int			k_out;
}				t_issafe;

int			ft_calcsquare();
int			ft_check_arrangement(char **tetrimino);
int			ft_check_blocksnb(char **tetrimino);
int			ft_check_squaresnb(char **tetrimino);
int			ft_check_validchars(char **tetrimino);
char		**ft_fillit(char ***tab_input);
int			ft_issafe();
int			ft_isvalid(char ***tab_input);
char		**ft_placepiece();
void		ft_printoutput(char **tab_output);
char		***ft_readfile(char *source_file);
char		**ft_removepiece();
int			ft_tetrindex();

#endif
