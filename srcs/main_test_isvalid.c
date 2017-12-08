/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_isvalid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:52:15 by flecouey          #+#    #+#             */
/*   Updated: 2017/12/08 16:07:07 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../fillit.h"

int		main(void)
{	
	char		**tab;
	char		str[] = "....\n#...\n###.\n....\n....\n";
	int			rt;

	tab = NULL;
	tab = ft_strsplit((const char*)str, '\n');
	rt = ft_isvalid(tab);
	ft_putnbr(rt);
	ft_putchar('\n');
	return (0);
}
