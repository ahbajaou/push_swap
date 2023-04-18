/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:40:03 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/18 05:13:15 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_sort(int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		while (i < len - 1)
		{
			if (arr[i] > arr[i + 1])
				return (1);
			i++;
		}
		i++;
	}
	return (0);
}
