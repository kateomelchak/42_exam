/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eomelcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 17:19:31 by eomelcha          #+#    #+#             */
/*   Updated: 2019/01/30 18:15:57 by eomelcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

int		ft_list_size(t_list *begin_list);

t_list	*ft_element(void *data)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

void	ft_print_list(t_list *list)
{
	while	(list)
	{
		printf("%s\n", list->data);
		list = list->next;
	}
}

void	ft_element_front(t_list **list, void *data)
{
	t_list 	*new;
	if (*list)
	{
		new = ft_element(data);
		new->next = *list;
		*list = new;
	}
	else
		*list = ft_element(data);
}

int		main(void)
{
	int cn;
	t_list	*list;

	list = NULL;
	ft_element_front(&list, "bbbb");
	ft_element_front(&list, "cccc");
	ft_element_front(&list, "aaaa");
	ft_print_list(list);
	cn = ft_list_size(list);
	printf(" #  is %d\n", cn);
	return (0);
}
