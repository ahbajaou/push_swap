/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:19:08 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/18 22:32:23 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_sign(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[0] == '-' && str[1] == '-')
			|| (str[0] == '+' && str[1] == '+'))
			ft_error();
		if ((str[0] == '-' && str[1] == '+')
			|| (str[0] == '+' && str[1] == '-'))
			ft_error();
		if (str[i] && str[i + 1] == '-' && str[i + 2])
			ft_error();
		if (str[i] && str[i + 1] == '+' && str[i + 2])
			ft_error();
		i++;
	}
}

int	ft_atoi(const char *str)
{
	int				i;
	int				k;
	int long long	j;

	i = 0;
	j = 0;
	k = 1;
	check_sign(str);
	while (str[i] == 32 || (str[i] >= 7 && str[i] <= 13))
			i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
				k *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
			j = (j * 10) + str[i] - 48;
			i++;
	}
	if ((k * j) > 2147483647 || (k * j) < -2147483648)
		ft_error();
	return (k * j);
}
