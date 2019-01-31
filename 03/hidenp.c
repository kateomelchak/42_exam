/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 12:10:22 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/31 12:30:44 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hidenp(char *s1, char *s2)
{
	char *temp;

	temp = s1;
	while(*temp & *s2)
	{
		if (*temp == *s2)
			temp++;
		s2++;
	}
	if (*temp == '\0')
		write(1, "1", 1);
	else
		write(1, "0", 1);
}


int		main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	if (argc == 3)
	{
		ft_hidenp(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	return (0);
}
