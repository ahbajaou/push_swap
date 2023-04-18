/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_empty_space.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 20:26:29 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/18 22:24:06 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_empty_space(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			if (!av[i][0])
				ft_error();
			i++;
		}
		i = 0;
		while (i < ac)
		{
			j = 0;
			if (av[i][j] == ' ' && av[i][j + 1] == ' ')
				ft_error();
			i++;
			j++;
		}
	}
	return ;
}
