/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:52:15 by flecouey          #+#    #+#             */
/*   Updated: 2018/02/20 21:08:30 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../fillit.h"

int		main(int argc, char **argv)
{
	(void)argc;
	//ft_putnbr(ft_isvalid(ft_readfile(argv[1])));
	ft_putnbr((int)ft_tablen2(ft_readfile(argv[1])));
	return (0);
}
