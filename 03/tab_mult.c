/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 18:17:44 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/31 19:28:11 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}


void	ft_putnbr(int n)
{
	char c;

	if (n > 9)
		ft_putnbr(n/10);
	c = n % 10 + '0';
	write(1, &c, 1);
}



void	ft_tb_mult(int n, char *str)
{
	int i;
	int x;
	char f;
	
	i = 1;
	while (i < 10)
	{
		x = i * n;
		f = i + '0';
		write(1, &f, 1);
		write(1, " x ", 3);
		putstr(str);
		write(1, " = ", 3);
		ft_putnbr(x);
		write(1, "\n", 1);
		i++;
	}
}

int		ft_atoi(char *str)
{
	int i;

	i = 0;
	while (*str >= '0' && *str <= '9')
	{
		i = i * 10 + *str - '0';
		str++;
	}
	return (i);
}



int		main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	if (argc == 2)
	{
		int i;

		i = ft_atoi(argv[1]);
		ft_tb_mult(i, argv[1]);
	}
	return (0);
}
