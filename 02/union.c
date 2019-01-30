/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 11:36:57 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/29 12:56:09 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_norm(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}


void	ft_union(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	while (str1[i] != '\0')
	{
		if (ft_norm(str1, str1[i], i))
				write(1, &str1[i], 1);
		i++;
	}
	j = 0;
	while (str2[j] != '\0')
	{
		if (ft_norm(str1, str2[j], i) && ft_norm(str2, str2[j], j))
			write(1, &str2[j], 1);
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	return (0);
}
