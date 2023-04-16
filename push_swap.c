/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:28:53 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/15 22:19:01 by ahbajaou         ###   ########.fr       */
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
       int len = 0;
        stack->spl = ft_split(tmp,' ');
        check_digit(stack->spl);
        while (stack->spl[len])
            len++;
        // printf("----%d\n",len);
        // exit(0);
        while (j < len)
        {
            //printf("%s\n", stack->spl[j]);
            stack->arr[j] = ft_atoi(stack->spl[j]);
            j++;
        }
        check_double(stack->arr,len);
        if (check_sort(stack->arr,len) == 0)
            ft_error();
        stack_a = add_arr_to_list(stack->arr, len, stack_a);

        if (ac <= 6)
        {
            sort_five_or_less(&stack_a,&stack_b, ac);
        }
        print_list(stack_b);
        // int k = 0;
        // while (k < len)
        // {
        //     printf("%d\n",stack->arr[k]);
        //     k++;
        // }
        // system("leaks push_swap");

        free(tmp);
    }
    return(0);
}