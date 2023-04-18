/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 03:29:00 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/18 05:50:10 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_rotate_b(t_node **stack_b)
{
	t_node	*sec;
	t_node	*tmp;

	if ((*stack_b) == NULL || (*stack_b)->next == NULL)
		return ;
	tmp = (*stack_b);
	while (tmp->next != NULL)
	{
		sec = tmp;
		tmp = tmp->next;
	}
	sec->next = NULL;
	tmp->next = (*stack_b);
	(*stack_b) = tmp;
	write(1, "rrb\n", 4);
}

void	swap_b(t_node **stack_b)
{
	t_node	*second;
	t_node	*first;

	if ((*stack_b) == NULL || (*stack_b)->next == NULL)
		return ;
	first = (*stack_b);
	second = (*stack_b)->next;
	(*stack_b) = second;
	first->next = second->next;
	second->next = first;
	write(1, "sb\n", 3);
}

void	push_b(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;

	if (!(*stack_b))
	{
		tmp = (*stack_a);
		(*stack_a) = (*stack_a)->next;
		tmp->next = NULL;
		(*stack_b) = tmp;
	}
	else
	{
		tmp = (*stack_a);
		(*stack_a) = (*stack_a)->next;
		tmp->next = *stack_b;
		(*stack_b) = tmp;
	}
	write(1, "pb\n", 3);
}

void	rotate_b(t_node **stack_b)
{
	t_node	*tmp;

	if ((*stack_b) == NULL || (*stack_b)->next == NULL)
		return ;
	tmp = (*stack_b);
	while (tmp->next != NULL)
			tmp = tmp->next;
	tmp->next = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	tmp->next->next = NULL;
	write(1, "rb\n", 3);
}
