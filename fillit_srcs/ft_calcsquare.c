/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calcsquare.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <flecouey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 18:05:56 by flecouey          #+#    #+#             */
/*   Updated: 2018/02/27 21:02:46 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../fillit.h"

int		ft_calcsquare(char **tab_output)
{
	int		j;
	int		k;
	int		k_len;
	int		len_square;

	j = ft_tablen(tab_output);
	k_len = ft_strlen(tab_output[j]);
	len_square = 0;
	while (j >= 0)
	{
		k = k_len - 1;
		while (k >= len_square)
		{
			if (ft_isupper(tab_output[j][k]) && MAX(j, k) > len_square)
				len_square = MAX(j, k);
			k--;
		}
		j--;
	}
	return (len_square);
}
