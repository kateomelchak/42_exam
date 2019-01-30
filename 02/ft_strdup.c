/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 13:20:21 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/28 14:19:45 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		len;
	char	*new;

	len = 0;
	while (str[len])
		len++;
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	str[len] = '\0';
	while (len >= 0)
	{
		new[len] = str[len];
		len--;
	}
	return (new);
}

int		main(int argc, char **argv)
{
	char *new;

	new = ft_strdup(argv[1]);
	if (argc == 2)
		printf("new:  %s\n", new);
	return (0);
}
