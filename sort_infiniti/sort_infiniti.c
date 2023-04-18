/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_infiniti.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 05:02:17 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/18 06:31:22 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	divide_b_push_all(t_node **stack_a, t_node **stack_b, t_push *ronowa)
{
	int	flag;

	while ((*stack_b))
	{
		while (1)
		{
			ronowa->bigg = check_biggest_element(stack_b, *ronowa);
			if (ronowa->bigg == 0)
			{
				flag = 1;
				break ;
			}
			else if (ronowa->bigg <= leghtlist(stack_b) / 2)
				rotate_b(stack_b);
			else if (ronowa->bigg > leghtlist(stack_b) / 2)
				rev_rotate_b(stack_b);
		}
		if (flag)
			push_a(stack_a, stack_b);
	}
}

void	push_smaltob(t_node **stack_a, t_node **stack_b, t_push *ronowa)
{
	int	i;

	i = 0;
	while (*stack_a)
	{
		if ((*stack_a)->data <= ronowa->arr[i])
		{
			push_b(stack_a, stack_b);
			rotate_b(stack_b);
			i++;
		}
		else if ((*stack_a)->data > ronowa->arr[i]
			&& (*stack_a)->data <= ronowa->arr[ronowa->range + i])
		{
			push_b(stack_a, stack_b);
			if (leghtlist(stack_b) > 1
				&& (*stack_b)->data < (*stack_b)->next->data)
				swap_b(stack_b);
			i++;
		}
		else
			rotate_a(stack_a);
	}
}

void	sort_infiniti(t_node **stack_a, t_node **stack_b, t_push *ronowa)
{
	ronowa->size = leghtlist(stack_a);
	sort_in_tab(ronowa);
	if (ronowa->size >= 6 && ronowa->size <= 16)
		ronowa->range = 4;
	else if (ronowa->size <= 100)
		ronowa->range = 13;
	else if (ronowa->size <= 500)
		ronowa->range = 35;
	push_smaltob(stack_a, stack_b, ronowa);
	divide_b_push_all(stack_a, stack_b, ronowa);
}
