/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:52:15 by flecouey          #+#    #+#             */
/*   Updated: 2018/02/19 20:23:36 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../fillit.h"

int		main(int argc, char **argv)
{
	(void)argc;
	//ft_putstr(ft_readfile(argv[1])[0][3]);
	ft_putnbr(ft_isvalid(ft_readfile(argv[1])));
	//ft_putnbr(ft_check_validchars(ft_readfile(argv[1])[0]));
	return (0);
}
