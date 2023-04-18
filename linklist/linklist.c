/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linklist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 07:50:22 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/18 05:43:31 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*creat_t_node(int nb)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	new->data = nb;
	new->next = NULL;
	return (new);
}

void	add_back(t_node *list, t_node *new)
{
	t_node	*tmp;

	tmp = list;
	if (list == NULL)
	{
		list = new;
		new->next = NULL;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
}

int	leghtlist(t_node **stack)
{
	int		i;
	t_node	*tmp;

	i = 0;
	tmp = (*stack);
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

t_node	*add_arr_to_list(int *arr, int len, t_node *stack_a)
{
	int	i;

	i = 1;
	while (i < len)
	{
		add_back(stack_a, creat_t_node(arr[i]));
		i++;
	}
	return (stack_a);
}
