/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 09:16:46 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/12 16:17:59 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


void rotate_a(node **stack_a)
{

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return;
	node *tmp = *stack_a;
	while (tmp->next != NULL){
		tmp = tmp->next;
	}
	write(1,"ra\n",3);
	tmp->next = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	tmp->next->next = NULL;
}

void    swap_a(node **stack_a)
{
	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		int     tmp;
		node *first = (*stack_a);
		node *second = (*stack_a)->next;

		tmp = first->data;
		first->data = second->data;
		second->data = tmp;
		(*stack_a) = second;
		(*stack_a)->next = first;
		(*stack_a)->next->next = NULL;
		write(1,"sa\n",3);
	}
} 
void  push_b(node **stack_a,node **stack_b)
{
		node *first;
		first = (*stack_a);
	// {
	if ((*stack_a) != NULL)
			add_font(&(*stack_b),creat_node(first->data));
	else
		(*stack_b) = creat_node(first->data);
	write(1,"pb\n",3);

}
void  push_a(node **stack_a,node **stack_b)
{
	if ((*stack_b) == NULL)
		return ;
	node *first;
	first = (*stack_b);
	add_font(&(*stack_a),creat_node(first->data));
	write(1,"pa\n",3);
	// (*stack_a) = creat_node(first->data);
}

void    swap_b(node **stack_b)
{
	if ((*stack_b) == NULL || (*stack_b)->next == NULL)
		return ;
	int tmp;
	node *first = (*stack_b);
	node *second = (*stack_b)->next;
	tmp = first->data;
	first->data = second->data;
	second->data = tmp;
	(*stack_b) = second;
	(*stack_b)->next = first;
	(*stack_b)->next->next = NULL;
	write(1,"sb\n",3);
}

void    rotate_b(node **stack_b)
{
	if ((*stack_b) == NULL)
		return ;
	node *tmp = (*stack_b);
	while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = (*stack_b);
		(*stack_b) = (*stack_b)->next;
		tmp->next->next = NULL;
		write(1,"rb\n",3);
}

