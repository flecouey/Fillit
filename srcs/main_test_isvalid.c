/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_isvalid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:52:15 by flecouey          #+#    #+#             */
/*   Updated: 2017/12/08 15:31:48 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../fillit.h"

int		main(void)
{
	char	***tab;
	int		rt;

	tab = NULL;
	tab[0][0] = "....\n";
	tab[0][1] = "#...\n";
	tab[0][2] = "###.\n";
	tab[0][3] = "....\n";
	tab[1] = 0;

	rt = ft_isvalid(tab);
	ft_putnbr(rt);
	ft_putchar('\n');
	return (0);
}
