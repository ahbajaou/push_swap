/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 04:15:36 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/18 05:18:23 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3_twin(t_node **stack_a)
{
	t_node	*first;
	t_node	*seceond;
	t_node	*three;

	first = (*stack_a);
	seceond = (*stack_a)->next;
	three = (*stack_a)->next->next;
	if (seceond->data < first->data && seceond->data < three->data
		&& three->data > first->data)
		swap_a(stack_a);
	else if (seceond->data < first->data && seceond->data < three->data
		&& three->data < first->data)
		rotate_a(stack_a);
}

void	sort_3(t_node **stack_a)
{
	t_node	*first;
	t_node	*seceond;
	t_node	*three;

	first = (*stack_a);
	seceond = (*stack_a)->next;
	three = (*stack_a)->next->next;
	sort_3_twin(stack_a);
	if (first->data < seceond->data && first->data > three->data)
		rev_rotate_a(stack_a);
	else if (first->data > seceond->data && first->data > three->data
		&& seceond->data > three->data)
	{
		swap_a(stack_a);
		rev_rotate_a(stack_a);
	}
	else if (first->data < seceond->data && first->data < three->data
		&& seceond->data > three->data)
	{
		swap_a(stack_a);
		rotate_a(stack_a);
	}
}
