/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flecouey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:52:15 by flecouey          #+#    #+#             */
/*   Updated: 2018/02/18 17:56:21 by flecouey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../fillit.h"

int		main(int argc, char **argv)
{
	(void)argc;
	//ft_putstr(ft_readfile(argv[1])[0][0]);
	ft_putnbr(ft_check_arrangement(ft_readfile(argv[1])[0]));
	return (0);
}
