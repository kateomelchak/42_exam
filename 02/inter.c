/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 14:20:49 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/28 16:29:51 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_norm(char *str, char c, int p)
{
	int		i;

	i = 0;
	while (i < p)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_inter(char *str1, char *str2)
{
	int i;
	int j;
	int norm;

	i = 0;
	while(str1[i] != '\0')
	{
		norm = ft_norm(str1, str1[i], i);
		if (norm  == 1)
		{
			j = 0;
			while (str2[j] != '\0')
			{
				if (str2[j] == str1[i])
				{
					write(1, &str1[i], 1);
					break;
				}
				j++;
			}
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	char *c;
	char *str1;
	char *str2;

	if (argc != 3)
		write(1, "\n", 1);
	if (argc == 3)
	{
		ft_inter(argv[1], argv[2]);
		write(1, "\n", 1);
	}

	return (0);
}
