/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 19:21:20 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/24 19:35:42 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_len(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
		i++;
	return (i);
}

int main (int argc, char **argv)
{
	int len;

	if (argc == 2)
	{
		len = ft_len(argv[1]);
		while(len >= 0)
		{	
			write(1, &argv[1][len], 1);
			len--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
