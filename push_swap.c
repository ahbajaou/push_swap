/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:28:53 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/09 08:27:59 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int main(int ac, char **av)
{
    t_push *stack;
    node *stack_a;

    stack_a = malloc(sizeof(node));
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
        while (j < len)
        {
            stack->arr[j] = ft_atoi(stack->spl[j]);
            j++;
        }
        check_double(stack->arr,len);
        if (check_sort(stack->arr,len) == 0)
            ft_error();
        add_arr_to_list(stack->arr,len,&stack_a);
        if (ac <= 6)
        {
            printf("dear\n");
            exit(0);
        }
        // int k = 0;
        // while (k < len)
        // {
        //     printf("%d\n",stack->arr[k]);
        //     k++;
        // }
        free(tmp);
    }
    return(0);
}