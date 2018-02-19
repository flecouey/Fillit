/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fillit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 23:22:24 by flecouey          #+#    #+#             */
/*   Updated: 2018/02/19 21:54:30 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../fillit.h"

char	**ft_fillit(char ***tab_input)
{
	char	**tab_output;

//	(void)tab_input;
	tab_output = ft_solver(tab_input);
	return (tab_output);
}
