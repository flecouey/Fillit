/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_taballoc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 19:46:44 by flecouey          #+#    #+#             */
/*   Updated: 2018/02/21 19:47:59 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../fillit.h"

char	**ft_taballoc(void)
{
	int		i;
	char	**tab_output;

	i = 0;
	tab_output = NULL;
	if (!(tab_output = ft_memalloc(sizeof(char*) * (4 * 26 + 1) )))
		return (NULL);
	while (i < (4 * 26))
	{
		if (!(tab_output[i] = ft_memalloc(sizeof(char) * (4 * 26 + 1) )))
			return (NULL);
		i++;
	}
	return (tab_output);
}
