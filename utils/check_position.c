/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_position.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:02:02 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/18 04:51:15 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_position(t_node **stack_a)
{
	t_node	ronowa;
	t_node	*tmp;
	int		smaller;
	t_node	*current;
	int		i;

	tmp = (*stack_a);
	current = (*stack_a);
	smaller = (*stack_a)->data;
	i = 0;
	while (tmp != NULL)
	{
		if (tmp->data < smaller)
			smaller = tmp->data;
		tmp = tmp->next;
	}
	while (current != NULL)
	{
		if (current->data == smaller)
			ronowa.index = i;
		current = current->next;
		i++;
	}
	return (ronowa.index);
}
