/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 16:48:40 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/29 09:56:25 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;	
	while(str[i] != '\0')
		i++;
	return (i);
}

int		ft_blank(char c)
{
	if ( c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	int len;

	if (argc != 2)
		write(1, "\n", 1);
	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		len = len - 1;
		while (ft_blank(argv[1][len]))
			len--;
		while (*argv[1] && !ft_blank(argv[1][len]))
			len--;
		len = len + 1;
		while (*argv[1] && !ft_blank(argv[1][len]))
		{
			write(1, &argv[1][len], 1);
			len++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
