/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smal_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 05:17:24 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/18 22:12:35 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_two(t_node **stack_a)
{
	t_node	*second;
	t_node	*first;

	second = (*stack_a);
	first = (*stack_a)->next;
	if (first > second)
		swap_a(stack_a);
}

void	sort_4(t_node **stack_a, t_node **stack_b)
{
	t_node	ronowa;

	ronowa.index = 0;
	ronowa.index = check_position(stack_a);
	if (ronowa.index == 2)
	{
		rotate_a(stack_a);
		rotate_a(stack_a);
	}
	else if (ronowa.index == 1)
		swap_a(stack_a);
	else if (ronowa.index == 3)
		rev_rotate_a(stack_a);
	push_b(stack_a, stack_b);
	sort_3(stack_a);
	push_a(stack_a, stack_b);
}

void	sort_5(t_node **stack_a, t_node **stack_b)
{
	t_node	ronowa;

	ronowa.index = 0;
	ronowa.index = check_position(stack_a);
	if (ronowa.index == 1)
		swap_a(stack_a);
	else if (ronowa.index == 2)
	{
		rotate_a(stack_a);
		rotate_a(stack_a);
	}
	else if (ronowa.index == 3)
	{
		rev_rotate_a(stack_a);
		rev_rotate_a(stack_a);
	}
	else if (ronowa.index == 4)
		rev_rotate_a(stack_a);
	push_b(stack_a, stack_b);
	sort_4(stack_a, stack_b);
	push_a(stack_a, stack_b);
}

void	sort_five_or_less(t_node **stack_a, t_node **stack_b, int ac)
{
	(void)ac;
	if (leghtlist((stack_a)) == 2)
		sort_two(stack_a);
	else if (leghtlist((stack_a)) == 3)
		sort_3(stack_a);
	else if (leghtlist((stack_a)) == 4)
		sort_4(stack_a, stack_b);
	else if (leghtlist((stack_a)) == 5)
		sort_5(stack_a, stack_b);
}
