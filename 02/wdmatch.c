/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 14:52:51 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/29 16:10:16 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wdmatch(char *s1, char *s2)
{
	char *temp;
	
	temp = s1;
	while (*temp && *s2)
	{
		if (*temp == *s2)
			temp++;
		s2++;
	}
	if (*temp == '\0')
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
	if (argc != 3)
		write(1, "\n", 1);
	if (argc == 3)
	{
		wdmatch(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	return (0);
}
