/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 18:17:03 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/31 12:10:10 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int *new;
	int len;
	int i;

	if (end >= start)
		len = end - start + 1;
	else
		len = start - end + 1;
	new = (int *)malloc(sizeof(int) * (len + 1));
	if (!new)
		return (NULL);
	i = 0;
	while(i < len)
	{
		if (end >= start)
		{
			new[i] = start;
			start++;	
		}
		else
		{
			new[i] = start;
			start--; 
		}
		i++;
	}
	return (new);
}


int		main(void)
{
	int x;
	int y;
	int len;
	int	*new;
	int i;

	x = 1;
	y = 3;
	new = ft_rrange(x,y);
	if (y >= x)
		len = y - x + 1;
	else 
		len = x - y + 1;
	i = 0;
	while (i < 3)
	{
		printf(" %d |", new[i]);
		i++;
	}
	return (0);
}
