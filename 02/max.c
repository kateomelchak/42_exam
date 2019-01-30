/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 14:15:19 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/29 14:46:43 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		max(int *tab, unsigned int len)
{
	int max;
	int i;

	if (!len)
		return (0);

	max = tab[0];
	i = 1;
	while (i < len)
	{
		if (tab[i] > max)
		   max = tab[i];
		i++;
	}
	return (max);
}

int main(void)
{
	int *n;
	
	n = (int *)malloc(sizeof(int) * 5);	
	n[0] = 44;
	n[1] = 1;
	n[2] = 999;
	n[3] = 11;
	n[4] = 1;
	printf("max:  %d\n", max(n, 5));
	return (0);
}
