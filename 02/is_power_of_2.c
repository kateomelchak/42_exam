/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 19:22:03 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/30 10:42:29 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		is_power_of_2(unsigned int n)
{
	if ( n == 0)
		return (0);
	while (n % 2 == 0)
		n = n / 2;
	if ( n == 1)
		return (1);
	else 
		return (0);
}

int		main(int argc, char **argv)
{ 
	int i;

	if (argc == 2)
	{
		i = atoi(argv[1]);
		printf("it is: %d\n", is_power_of_2(i));
	}
	return (0);
}
