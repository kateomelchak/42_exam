/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 16:55:10 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/29 18:22:48 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		main(int argc, char** argv)
{
	if (argc != 4)
		write(1, "\n", 1);
	if (argc == 4)
	{
		ft_do_op(argv[1], argv[2], argv[3]);
	}
	return (0);
}
