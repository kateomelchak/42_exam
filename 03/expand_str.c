/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 14:13:14 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/31 18:17:25 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_expand_str(char *str)
{
	int f;

	f = 0;
	while (*str == 32 || *str == 9)
		str++;
	while(*str)
	{
		if (*str == 32 || *str == 9)
			f = 1;
		if (!(*str == 32 || *str == 9))
		{
			if (f == 1)
			{
				write(1, "   ", 3);
			}
			f = 0;
			write(1, str, 1);
		}
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	if (argc == 2)
	{
		ft_expand_str(argv[1]);
		write(1, "\n", 1);
	}
	return (0);
}
