/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 23:12:08 by flecouey          #+#    #+#             */
/*   Updated: 2017/12/08 16:08:21 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FILLIT_H
# define _FILLIT_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

int			ft_check_arrangement(char **tetrimino);
int			ft_check_blocksnb(char **tetrimino);
int			ft_check_squaresnb(char **tetrimino);
int			ft_check_validchars(char **tetrimino);
char		**ft_fillit(char ***tab_input);
int			ft_isvalid(char ***tab_input);
void		ft_printoutput(char **tab_output);
char		***ft_readfile(char *source_file);

#endif
