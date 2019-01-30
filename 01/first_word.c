/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 18:37:45 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/28 11:36:45 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;	
	if (argc == 2)
	{
		while (argv[1][i] == '\t' || argv[1][i] == ' ')
				i++;
		while (argv[1][i] && (argv[1][i] != '\t' &&  argv[1][i] != ' '))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
