/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:28:53 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/18 22:30:02 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_to_spl(int ac, char **av, t_push *stack)
{
	int		i;
	char	*tmp;

	i = 1;
	tmp = malloc(sizeof(char) * 1);
	tmp[0] = '\0';
	while (i < ac)
	{
		tmp = ft_strjoin(tmp, av[i]);
		tmp = ft_strjoin(tmp, " ");
		i++;
	}
	stack->spl = ft_split(tmp, ' ');
	free(tmp);
}

void	char_to_arr(t_push *stack)
{
	int	j;

	j = 0;
	stack->len = 0;
	while (stack->spl[stack->len])
		stack->len++;
	while (j < stack->len)
	{
		stack->arr[j] = ft_atoi(stack->spl[j]);
		j++;
	}
}

int	main(int ac, char **av)
{
	t_push	*stack;
	t_node	*stack_a;
	t_node	*stack_b;

	if (ac < 2)
		return (0);
	stack_a = creat_t_node(ft_atoi(av[1]));
	stack = malloc(sizeof(t_push));
	stack->arr = malloc(sizeof(int *) * ac - 1);
	check_empty_space(ac, av);
	if (ac > 1)
	{
		put_to_spl(ac, av, stack);
		check_digit(stack->spl);
		char_to_arr(stack);
		check_double(stack->arr, stack->len);
		if (check_sort(stack->arr, stack->len) == 0)
			return (0);
		stack_a = add_arr_to_list(stack->arr, stack->len, stack_a);
		if (leghtlist(&stack_a) <= 6)
			sort_five_or_less(&stack_a, &stack_b, ac);
		else
			sort_infiniti(&stack_a, &stack_b, stack);
	}
	return (0);
}
