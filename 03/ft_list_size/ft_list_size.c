/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 16:53:30 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/30 18:15:44 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		cn;
	t_list	*new;
	
	cn = 0;
	if	(!begin_list)
		return (cn);
	new = begin_list;
	while (new)
	{
		new = new->next;
		cn++;
	}
	return (cn);
 }
