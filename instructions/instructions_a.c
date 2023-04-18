/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 09:16:46 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/18 05:50:26 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(t_node **stack_a)
{
	t_node	*tmp;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	tmp = (*stack_a);
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	write(1, "ra\n", 3);
	tmp->next = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	tmp->next->next = NULL;
}

void	rev_rotate_a(t_node **stack_a)
{
	t_node	*tmp;
	t_node	*sec;

	if ((*stack_a) == NULL || (*stack_a)->next == NULL)
		return ;
	tmp = (*stack_a);
	while (tmp->next != NULL)
	{
		sec = tmp;
		tmp = tmp->next;
	}
	sec->next = NULL;
	tmp->next = (*stack_a);
	(*stack_a) = tmp;
	write(1, "rra\n", 4);
}

void	swap_a(t_node **stack_a)
{
	t_node	*second;
	t_node	*first;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	first = (*stack_a);
	second = (*stack_a)->next;
	(*stack_a) = second;
	first->next = second->next;
	second->next = first;
	write(1, "sa\n", 3);
}

void	push_a(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp;

	if (!stack_a || !(*stack_a))
	{
		tmp = (*stack_b);
		(*stack_b) = (*stack_b)->next;
		tmp->next = NULL;
		(*stack_a) = tmp;
	}
	else
	{
		tmp = (*stack_b);
		(*stack_b) = (*stack_b)->next;
		tmp->next = (*stack_a);
		(*stack_a) = tmp;
	}
	write(1, "pa\n", 3);
}
