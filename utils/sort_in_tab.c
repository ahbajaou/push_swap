/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:43:12 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/18 05:16:11 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_in_tab(t_push *stack)
{
	int		i;
	int		tmp;

	i = 0;
	while (i < stack->len - 1)
	{
		if (stack->arr[i] > stack->arr[i + 1])
		{
			tmp = stack->arr[i];
			stack->arr[i] = stack->arr[i + 1];
			stack->arr[i + 1] = tmp;
			i = 0;
		}
		else
	i++;
	}
}
