/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 16:15:21 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/31 17:27:22 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int i;
	int s;


	s = 1;
	i = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str)
	{
		if (*str == '-')
		{
			s = -1;
			str++;
		}
		if (*str == '+')
			str++;
		if (!(*str == 32 || (*str >= 9 && *str <= 13)))
			i = (i * 10) + *str - '0';
		str++;
	}
	return (i*s);
}


void	ft_print_hex(int n)
{
	if (n >= 16)
		ft_print_hex(n / 16);
	n = n % 16;
	if (n < 10)
		n = n + '0';
	else
		n = n + 'a' - 10;
	write(1, &n, 1);
}
	
int		main(int argc, char **argv)
{
	int i;

	if (argc != 2)
		write(1, "\n", 1);
	if (argc == 2)
	{
		i = ft_atoi(argv[1]);
		ft_print_hex(i);
		write(1, "\n", 1);
	}
	return (0);
}
