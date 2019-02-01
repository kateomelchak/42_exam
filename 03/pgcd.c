/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 14:23:23 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/31 15:45:51 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int x;
	int y;
	int i;


	if (argc != 3)
		printf("\n");
	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		if (x >= y)
			i = y;
		else
			i = x;
		while (i > 0) 
		{
			if ((x % i) == 0  && (y % i) == 0)
			{
				printf("%d", i);
				break;
			}
			i--;
		}
		printf("\n");
	}
	return (0);
}
