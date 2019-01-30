/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 12:18:20 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/28 13:12:33 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(const char *str)
{
	int s;
	long i;
	char c;

	s = 1;
	i = 0;
	if (*str == '\0')
		return (0);
	while (*str != '\0')
	{
		if (*str == 32 || (*str >= 9 && *str <= 13))
				str++;
		if (*str == '+')
		{
			s = 1;
			str++;
		}
		if (*str == '-')
		{
			s = -1;
			str++;
		}
		while (*str >= '0' && *str <= '9')
		{
			i = (i *  10) + *str - '0';
			str++;
		}
	}
	return (i * s);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		printf ("number: %d\n", ft_atoi(argv[1]));
	return (0);
}
