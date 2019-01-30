/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 11:41:50 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/28 12:14:06 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
		write(1, "\n", 1);
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'a' && argv[1][i] < 'z') ||
					(argv[1][i] >= 'A' && argv[1][i] < 'Z'))
				argv[1][i] = argv[1][i] + 1;
			else if (argv[1][i] == 'z' || argv[1][i] =='Z')
				argv[1][i] = argv[1][i] - 25;
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
