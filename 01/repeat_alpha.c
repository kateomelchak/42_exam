/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 15:26:16 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/23 20:25:20 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_count(char c)
{
	int cn;

	if (c >= 'a' &&  c <= 'z')
		cn = c - 'a' +  1;
	else if (c >= 'A' &&  c <= 'Z')
		cn = c - 'A' + 1;
	else
		cn = 1;
	return (cn);
}

int		main(int argc, char **argv)
{
	int cn;
	int i;
	char l;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			cn  = ft_count(argv[1][i]);
			l = argv[1][i];
			while (cn > 0)
				{
					write(1, &l, 1);
					cn--;
				}
		i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

