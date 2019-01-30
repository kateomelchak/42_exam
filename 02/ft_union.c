/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 13:33:30 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/29 13:56:38 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_norm(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (i < pos)
	{
		if (c == str[i])
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (ft_norm(s1, s1[i], i))
			write(1, &s1[i], 1);
		i++;
	}
	while (s2[j] != '\0')
	{
		if 	(ft_norm(s1, s2[j], i) && ft_norm(s2, s2[j], j))
			write(1, &s2[j], 1);
		j++;
	}
}

void	ft_inter(char *s1, char *s2)
{
	int i;
	int j;

	i =0;
	while (s1[i] != '\0')
	{
	  if (ft_norm(s1, s1[i], i))
	  {
		  j = 0;
		  while (s2[j] != '\0')
		  {
			  if (s2[j] == s1[i])
			  {
				  write(1, &s1[i], 1);
				  break;
			  }
			  j++;
		  }
	  }
	  i++;
	}
}

int		main (int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
		write(1, "\n", 1);
		ft_inter(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	return (0);
}
