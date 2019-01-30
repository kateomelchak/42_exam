/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 10:49:58 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/29 11:36:51 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	int b;

	i = 7;
	while (i >= 0)
	{
		if (octet & (1 << i))
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--;
	}
}

int		main(void)
{
	unsigned char b;
	unsigned char a;

	b = 't';
	a = 'G';
	print_bits(b);
	write(1, "\n", 1);
	print_bits(a);
	write(1, "\n", 1);
	return (0);
}
