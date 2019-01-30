/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 13:57:06 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/29 14:13:28 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	char c;

	if (argc != 2)
		write(1, "\n", 1);
	if (argc == 2)
	{
		while(*argv[1])
		{
			if (*argv[1] >= 'a' && *argv[1] <= 'z')
				c = 'z' - *argv[1] + 'a';
			else if (*argv[1] >= 'A' && *argv[1] <= 'Z')
				c = 'Z' - *argv[1] + 'A';
			else
				c = *argv[1];
			write(1, &c, 1);
			argv[1]++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
