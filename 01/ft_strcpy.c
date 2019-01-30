/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 16:30:46 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/28 16:47:57 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy( char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		char *new;

		new = ft_strcpy(argv[1], argv[2]);
		printf("the copy is:  %s\n", new);
	}
	return (0);
}
