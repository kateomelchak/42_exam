/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnmb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 15:46:01 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/31 16:14:46 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnmb(int n)
{
	char c;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n < 10)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnmb(n / 10);
		ft_putnmb(n % 10);
	}
}

int		main(void)
{
	int i;

	i = -1569;
	ft_putnmb(i);
	return (0);
}
