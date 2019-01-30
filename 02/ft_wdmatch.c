/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wdmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 16:12:06 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/29 16:52:09 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_wdmatch(char *s1, char *s2)
{
	char *tmp;
	
	tmp = s1;
	while (*tmp && *s2)
	{
		if (*tmp == *s2)
			tmp++;
		s2++;
	}
	if (*tmp == '\0')
	{
		while (*s1)
		{
			write(1, s1, 1);
			s1++;
		}
	}
}


int		main(int argc, char **argv)
{
	if	(argc != 3)
		write(1, "\n", 1);
	if	(argc == 3)
	{
		ft_wdmatch(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	return (0);
}
