/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_position.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 21:02:02 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/15 22:02:43 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


int    check_position(node **stack_a)
{
    node ronowa;
    node *tmp = (*stack_a);
	node *current = (*stack_a);
	int smaller = (*stack_a)->data;
	int i = 0;

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