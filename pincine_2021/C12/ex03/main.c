/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgaladri <sgaladri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 06:29:28 by sgaladri          #+#    #+#             */
/*   Updated: 2021/08/19 06:30:52 by sgaladri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>
#define CE(data) ft_create_elem(data)




t_list	*ft_create_elem(void *data)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->data = data;
		tmp->next = NULL;
	}
	return (tmp);
}


t_list *ft_list_last(t_list *begin_list)
{
  t_list *list;
  
  if (begin_list)
  {
    while (begin_list)
    {
      list = begin_list;
      begin_list = begin_list->next;
    }
    return (list);
  }
  return (begin_list);
}

void ft_list_push_front(t_list **begin_list, void *data)
{
  t_list *list;
  
  if (list == NULL)
    *begin_list = ft_create_elem(data);
  else
  {
    list = ft_create_elem(data);
    list->next = *begin_list;
    *begin_list = list;
  }
}
void print_list(t_list *list)
{
  while (list)
  {
    printf("%s\n", list->data);
    list = list->next;
  }
}

int main()
{
	t_list* list = 0;
	

	list = CE("asdf");
	list->next = CE("qwer");
	list->next->next = CE("zxcv");
	
	print_list(list);
	
	print_list(ft_list_last(list));
	

}