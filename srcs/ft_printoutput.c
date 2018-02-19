/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printoutput.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 23:11:34 by flecouey          #+#    #+#             */
/*   Updated: 2018/02/19 21:26:23 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../fillit.h"

void	ft_printoutput(char **tab_output)
{
	size_t		i;

	i = 0;
	while (tab_output[i])
	{
		ft_putstr(tab_output[i]);
		ft_putchar('\n');
		i++;
	}
}
