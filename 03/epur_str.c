/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:31:28 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/30 16:53:12 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_norm(char *str)
{
	int sp;

	sp = 0;
	while (*str == 32 || *str == 9)
		str++;
	while (*str)
	{
		if (*str == 32 || *str == 9)
			sp = 1;
		if (!(*str == 32 || *str == 9))
		{
			if (sp == 1)
				write(1, " ", 1);
			sp = 0;
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
		ft_norm(argv[1]);
		write(1, "\n", 1);
	}
	return (0);
}


