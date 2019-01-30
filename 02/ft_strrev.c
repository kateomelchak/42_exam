/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 18:55:16 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/29 19:21:56 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int len;
	int i;
	char c;

	i = 0;
	len = 0;
	while(str[len] != '\0')
		len++;
	len = len -  1;
	while (i < len )
	{
		c = str[i];
		str[i] = str[len];
		str[len] = c;
		i++;
		len--;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	char *new;

	new = ft_strrev(argv[1]);
	if (argc == 2)
		printf("%s\n", new);
	return (0);
}
