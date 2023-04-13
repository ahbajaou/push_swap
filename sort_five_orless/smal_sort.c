/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smal_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 05:17:24 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/13 20:42:40 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

void    sort_two(node **stack_a)
{
	node *tmp = (*stack_a);
	int second = tmp->data;
	int first = tmp->next->data;
	if (first > second)
	{
		printf("here\n");
		swap_a(stack_a);

	}
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

	node *smaller;
	if (first->data < seceond->data && first->data < three->data)
		smaller = first;
	else if (seceond->data < first->data && seceond->data < three->data)
		 smaller = seceond;
	else
		 smaller = three;
	push_b(&smaller,stack_b);
	free_stack(stack_a,smaller->data);
	sort_two(stack_a);
	push_a(stack_a,stack_b);
	free_stack(stack_b,smaller->data);
	// free_stack(stack_b,smaller->next->data);
	// printf("<<<<<%d\n",smaller->data);
}
void    sort_4(node **stack_a,node **stack_b)
{
	(void)stack_b;
	node *tmp = (*stack_a);
	node *one = tmp;
	node *two = tmp->next;
	node *three = tmp->next->next;
	node *four = tmp->next->next->next;

	node *smaller;
	smaller = one;
	if (two->data < smaller->data)
		smaller = two;
	if (three->data < smaller->data)
		smaller = three;
	if (four->data < smaller->data)
		smaller = four;
	push_b(&smaller,stack_b);
	free_stack(stack_a,smaller->data);
	sort_three(stack_a,stack_b);
	push_a(stack_a,&(*stack_b)->next);
	free_stack(stack_b,smaller->data);
	// free_stack(stack_b,smaller->next->data);

	// printf(">>>>%d\n",smaller->next->data);
}
void    sort_five(node **stack_a,node **stack_b)
{
	node *one = (*stack_a);
	node *two = (*stack_a)->next;
	node *three = (*stack_a)->next->next;
	node *four = (*stack_a)->next->next->next;
	node *five = (*stack_a)->next->next->next->next;

	node *smaller = one;

	if (two->data < smaller->data)
		smaller = two;
	if (three->data < smaller->data)
		smaller = three;
	if (four->data < smaller->data)
		smaller = four;
	if (five->data < smaller->data)
		smaller = five;
	push_b(&smaller,stack_b);
	free_stack(stack_a,smaller->data);
	sort_4(stack_a,stack_b);
	push_a(stack_a,&(*stack_b)->next);
	free_stack(stack_b,smaller->next->data);
	// free_stack(stack_b,smaller->data);
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
	else if (ac == 5)
	{
		sort_4(stack_a,stack_b);
	}
	else if (ac == 6)
	{
	    sort_five(stack_a,stack_b);
	}
}