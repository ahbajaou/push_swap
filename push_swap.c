/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:28:53 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/17 18:11:08 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int main(int ac, char **av)
{
    t_push *stack;
    node *stack_a;
    node *stack_b;

    // stack_a = malloc(sizeof(stack_a));
    // stack_a->data = 3;
    // stack_a->next = NULL;
    if (ac < 2)
        return (0);
    stack_a = creat_node(ft_atoi(av[1]));
    // stack_b = malloc(sizeof(node));
    stack = malloc(sizeof(t_push));
    int i = 1;
    stack->i = 1;
    stack->arr = malloc(sizeof(int *) * ac - 1);
    char *tmp = "";
    check_empty_space(ac,av);
    if (ac > 1)
    {
        while (i < ac)
        {
            tmp = ft_strjoin(tmp, av[i]);
            tmp = ft_strjoin(tmp, " ");
            i++;
        }
       int j = 0;
        stack->spl = ft_split(tmp,' ');
        check_digit(stack->spl);
        stack->len = 0;
        while (stack->spl[stack->len])
            stack->len++;
    
        while (j < stack->len)
        {
            stack->arr[j] = ft_atoi(stack->spl[j]);
            j++;
        }
        check_double(stack->arr,stack->len);
        if (check_sort(stack->arr,stack->len) == 0)
            ft_error();
        stack_a = add_arr_to_list(stack->arr, stack->len, stack_a);
        if (ac <= 6)
        {
            sort_five_or_less(&stack_a,&stack_b, ac);
        }
        sort_infiniti(&stack_a,&stack_b,stack);
        print_list(stack_b);
        free(tmp);
        // system("leaks push_swap");
    }
    return(0);
}