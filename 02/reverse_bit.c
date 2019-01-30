/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 09:56:36 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/29 10:28:36 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char r;
	unsigned int len;

	r = 0;
	len = 8;
	while (len > 0)
	{
		r = (r << 1) | (octet & 1);
		octet >>= 1;
		len--;
	}
	return (r);
}

int main(void)
{
	unsigned char c;
	c = '.';
	write (1, &c,1);
	write(1, "\n", 1);
	c = reverse_bits(c);
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
