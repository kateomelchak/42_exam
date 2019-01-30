/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 18:23:23 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/29 18:35:59 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int len;

	len = 7;
	while (len >= 0)
	{
		if (octet & (1 << len))
			write(1, "1", 1);
		else
			write(1, "0", 1);
		len--;
	}
	write(1, "\n", 1);
}

int		main(void)
{
	char c;

	c = 2;
	print_bits(c);
	return (0);
}
