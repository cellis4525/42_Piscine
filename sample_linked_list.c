/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   postfix.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cellis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 14:04:57 by cellis            #+#    #+#             */
/*   Updated: 2018/08/12 17:34:53 by cellis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#ifndef  STRUCT_H
# define STRUCT_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

#endif

/* this will take any data type (type void*), will allocate enough memory
 * for it on the stack, will store the data in that allocated memory, and
 * then will return a pointer to the address of that data location*/

t_list	*ft_create_elem(void *data)
{
	t_list *node;

	if (!(node = malloc(sizeof(t_list))))
		return (0);
	node->data = data;
	node->next = NULL;
	return (node);
}

/* This will take a pointer to the start of the list and a data elemnt. Will
 * call (create_elem) to create a place to store the item using malloc,
 * will have this newly created item point to the beginning of the list, and
 * then will change the current *begin_list to point to the newly created
 * item which will now be the beginning of the list */

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*node;

	printf("Made it to list_push_front");
	if (*begin_list)
	{
		printf("Attempting to put %s in the list\n", data);
		node = ft_create_elem(data);
		node->next = *begin_list;
		*begin_list = node;
	}
	else
		*begin_list = ft_create_elem(data);
}

/* In: Pointer to start of list
 *
 * Action: Unlinks the first element of the list and returns a pointer
 * to that space
 *
 * Out: Data element stored at the beginning of the list
 *
 * This will take a pointer to the start of the list, will
 * grab the first item, make the pointer to the list point to the next item,
 * and will return the data in the node that was just unlinked */

void	*ft_list_pop(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*rem;

	if (*begin_list == NULL)
		return (0);
	rem = *begin_list;
	tmp = rem->next;
	*begin_list = tmp;
	return (rem);
}

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int			index;
	t_list		*to_return;

	to_return = begin_list;
	index = nbr;
	if (begin_list == (NULL))
		return (NULL);
	while (index-- && to_return)
		to_return = to_return->next;
	if (index < -1)
		return (NULL);
	return (to_return);
}

int		main(int ac, char **av)
{
	int		i;
	t_list	*tmp;
	t_list	*list;
	int		j;

	if (ac <= 0)
		return (0);
	printf("EXP begins as %s\n", *av);
	printf("**begin currently points to nothing\n");
	printf("Beginning loop to push elements to list\n");
	i = 0;
	tmp = 0;
	while (i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = tmp;
		tmp = list;
		printf("Added elem %s to the list\n", (av[i]));
		i++;
	}
	printf("\nList successfully loaded\n\n");
	printf("Printing elements of list ... \n\n");
	i = 0;
	while (i < ac - 1)
	{
		tmp = ft_list_at(list, i);
		printf("List item %d is %s\n", i, tmp->data);
		i++;
	}
	printf("\n\nPopping and freeing the first item from the list ...\n");
	while (j < ac - 1)
	{
		tmp = list;
		list = list->next;
		free(tmp);
		i = 0;
		printf("\n--->New list is now:\n");
		while (tmp->next)
		{
			tmp = ft_list_at(list, i);
			printf("List item %d is %s\n", i, tmp->data);
			i++;
		}
		j++;
	}
	return (0);
}
