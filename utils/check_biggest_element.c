/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_biggest_element.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 20:53:13 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/18 05:44:50 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_biggest_element(t_node **stack_b, t_push ronowa)
{
	t_node	*tmp;
	t_node	*current;
	int		bigone;
	int		i;

	current = (*stack_b);
	bigone = (*stack_b)->data;
	tmp = (*stack_b);
	i = 0;
	while (tmp)
	{
		if (tmp->data > bigone)
			bigone = tmp->data;
		tmp = tmp->next;
	}
	while (current)
	{
		if (current->data == bigone)
			ronowa.bigg = i;
		current = current->next;
		i++;
	}
	return (ronowa.bigg);
}
