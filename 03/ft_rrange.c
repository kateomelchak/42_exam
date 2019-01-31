/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 18:17:03 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/30 19:15:11 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr(int i)
{
	char c;

	if (i < 0)
	{
		write(1, "-", 1);
		i = -1 * i;
	}
	if (i < 10)
	{
		c = i + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
}


int		*ft_rrange(int start, int end)
{
	int len;
	int *new;
	if (end >= start)
		len = end - start + 1;
	else
		len = start - end + 1;
	new = (int *)malloc(sizeof(int) * len);
	if (!new)
		return (NULL);
	while (len > 0)
	{
		if (end >= start)
		{
			new[len] = start;
			start++;
		}
		else 
		{
			new[len] = start;
			start--;
		}
		len--;
	}
	return (new);
}

int		main(void)
{
	int x;
	int y;
	int *l;

	x = 1;
	y = 3;
	l = ft_rrange(x, y);
	while(*l)
	{
		ft_putnbr(l);
		l++;
	}
	return (0);
}
