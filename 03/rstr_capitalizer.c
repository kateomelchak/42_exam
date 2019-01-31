/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 12:30:57 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/31 14:04:43 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_capit(char *str)
{
	while (*str == 32 || *str == 9)
	{
		write(1, str, 1);
		str++;
	}
	while (*str)
	{
		if (!(*str == 32 || *str == 9) && (*str >= 'A' && *str <= 'Z'))
			*str = *str + 32;
		if ((*str >= 'a' && *str <='z') && (*(str + 1) == 32 || *(str + 1) == 9 || *(str + 1) == '\0'))
			*str = *str - 32;
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int  i;

	i = 1;
	if (argc == 1)
		write(1, "\n", 1);
	while (i < (argc))
	{
		ft_capit(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
