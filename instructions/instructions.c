/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 09:16:46 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/15 00:38:36 by ahbajaou         ###   ########.fr       */
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
void	rev_rotate_a(node **stack_a)
{
	if ((*stack_a) == NULL || (*stack_a)->next == NULL)
		return ; 
	node *tmp = (*stack_a);
	node *sec;
	while (tmp->next != NULL)
	{
		sec = tmp;
		tmp = tmp->next;
	}
	sec->next = NULL;
	tmp->next = (*stack_a);
	(*stack_a) = tmp;
	write(1,"rra\n",4);
}
void	rev_rotate_b(node **stack_b)
{
	if ((*stack_b) != NULL || (*stack_b)->next != NULL)
		return ; 
	node *tmp = (*stack_b);
	node *sec;
	while (tmp->next != NULL)
	{
		sec = tmp;
		tmp = tmp->next;
	}
	sec->next = NULL;
	tmp->next = (*stack_b);
	(*stack_b) = tmp;
	write(1,"rrb\n",4);
}
void    swap_a(node **stack_a)
{
	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		node *first = (*stack_a);
		node *second = (*stack_a)->next;

		(*stack_a) = second;

		first->next = second->next;
		second->next = first;
		write(1,"sa\n",3);
	}
} 
void  push_b(node **stack_a,node **stack_b)
{

		node *tmp = (*stack_a);
		(*stack_a) = (*stack_a)->next;
		tmp->next = (*stack_b);
		(*stack_b) = tmp;


	write(1,"pb\n",3);

}
void  push_a(node **stack_a,node **stack_b)
{
		node *tmp = (*stack_b);
		(*stack_b) = (*stack_b)->next;
		 tmp->next = (*stack_a);
		 (*stack_a) = tmp;
	write(1,"pa\n",3);
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

