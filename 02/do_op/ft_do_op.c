/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 17:07:03 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/29 18:20:37 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_do_op(char *s1, char *s2, char *s3)
{
	if (*s2 == '+')
		printf("%d\n", atoi(s1) + atoi(s3));		
	else if (*s2 == '-')
		printf("%d\n", atoi(s1) - atoi(s3));
	else if (*s2 == '/')
		printf("%d\n", atoi(s1) / atoi(s3));
	else if (*s2 == '%')
		printf("%d\n", atoi(s1) % atoi(s3));
	else if (*s2 == '*')
		printf("%d\n", atoi(s1) * atoi(s3));
}
