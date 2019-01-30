/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 17:59:14 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/24 18:36:12 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int arvc, char **argv)
{
	int i;

	i = 0;
	if (arvc == 2)
	{
		while (*argv[i] != '\0')
		{
			if ((*argv[i] >='A' && *argv[i] <= 'M') ||
					(*argv[i] >= 'a' && *argv[i] <= 'm'))
					*argv[i] = *argv[i] + 13;
			else if ((*argv[i] >='N' && *argv[i] <= 'Z') ||
					(*argv[i] >= 'n' && *argv[i] <= 'z'))
					*argv[i] = *argv[i] - 13;
			write(1, &argv[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
