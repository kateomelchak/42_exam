/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_prime_sum.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 12:47:05 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/30 15:30:49 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2)) 
	{
		if (!(nb % i))
			return (0);
		else
			i = i + 1;
	}
	return (1);
}
void ft_putnbr(int n)
{
	char c;
	
	if (n < 0)
	{
		write(1, "-", 1);
		n = -1 * n;
	}
	if (n >= 0 && n <= 9)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int		ft_atoi(char *str)
{
	int nb;
	int s;

	nb = 0;
	s = 1;
	if (!*str)
		return (0);
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		s = -1;
		str++;
	}
	if (*str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = (nb * 10) + *str - '0';
		str++;
	}
	return (nb * s);
}


int		main(int argc, char **argv)
{
	int nb;
	int sum;

	sum = 0;
	if (argc != 2)
		write(1, "0", 1);
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		while (nb > 0 )
		{
			if (ft_prime(nb))
				sum = sum + nb;
			nb--;
		}
		ft_putnbr(sum);
	}
	write(1, "\n", 1);
	return (0);
}
