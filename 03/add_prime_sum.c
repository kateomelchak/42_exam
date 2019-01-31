/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 10:42:56 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/30 12:39:50 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int i)
{
	char c;

	if (i < 0)
	{
		write(1, "-", 1);
		i = -1 * i;
	}
	if (i < 10)
	{
		c = i + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
}

int		atoi(char *str)
{
	int i;
	int s;

	s = 1;
	i = 0;
	if (*str == '\0')
		return (0);
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = (i * 10) + *str - '0';
		str++;
	}
	return (i * s);
}

int		checkPrime(int n)
{
	int i;
	i = 2;
	if ( n <= 1)
		return (0);
	while ( i <= (n / 2))
	{
		if (!( n % i))
			return (0);
		else i ++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int n;
	int s;

	if (argc != 2)
		write(1, "0", 1);

	if (argc == 2)
	{
		n = atoi(argv[1]);
		while (n > 0)
		{
			if (checkPrime(n) == 1)
				s = s + n;
			n--;
		}
		ft_putnbr(s);
	}
	write(1, "\n", 1);
	return (0);
}
