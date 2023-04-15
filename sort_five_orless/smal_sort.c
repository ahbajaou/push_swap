/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smal_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 05:17:24 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/15 02:53:50 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

void    sort_two(node **stack_a)
{
	node *second = (*stack_a);
	node *first = (*stack_a)->next;

	if (first > second)
		swap_a(stack_a);
}
void    sort_three(node **stack_a, node **stack_b)
{
	node *first;
	node *seceond;
	node *three; 
	(void)stack_b;
	first = (*stack_a);
	seceond = (*stack_a)->next;
	three = (*stack_a)->next->next;

	if (seceond->data < first->data && seceond->data < three->data && three->data > first->data)
		swap_a(stack_a);
	else if (seceond->data < first->data && seceond->data < three->data && three->data < first->data)
		rotate_a(stack_a);
	else if (first->data < seceond->data && first->data > three->data)
		rev_rotate_a(stack_a);
	else if (first->data > seceond->data && first->data > three->data && seceond->data > three->data)
		{
			swap_a(stack_a);
			rev_rotate_a(stack_a);
		}
	else if (first->data < seceond->data && first->data < three->data && seceond->data > three->data)
		{
			swap_a(stack_a);
			rotate_a(stack_a);
		}
}

void	sort_45(node **stack_a,node **stack_b)
{
	(void)(*stack_b);
	node *tmp = (*stack_a);
	int smaller = (*stack_a)->data;
	int i = 0;
	int len = 0;
	while (tmp)
	{
		if (tmp->data > smaller)
		{
			smaller = tmp->data;
			i++;
		}
		tmp = tmp->next;
	}
	len = leghtlist(stack_a);
	while (len > i)
	{
		len--;
	}
	printf("i === %d\n",len);
	printf("\n");
	printf(">>>>>>>%d\n",smaller);
	// print_list((*stack_b));
}
void    sort_five_or_less(node **stack_a,node **stack_b ,int ac)
{
	if (ac == 3)
	{
		sort_two(stack_a);
	}
	else if (ac == 4)
	{
		sort_three(stack_a,stack_b);
	}
	else if (ac <= 6)
	{
		sort_45(stack_a,stack_b);
	}
}