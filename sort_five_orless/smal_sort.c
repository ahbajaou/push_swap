/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smal_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 05:17:24 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/12 07:29:59 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

void    sort_two(node **stack_a)
{
    //    if ((*stack_a) == NULL)
    //         return ;
    node *first = (*stack_a);
    node *second = (*stack_a)->next;
        if (first->data > second->data)
            rotate_a(stack_a);
        // print_list((*stack_a));
}
void    sort_three(node **stack_a, node **stack_b)
{
    node *first;
    node *seceond;
    node *three; 

    first = (*stack_a);
    seceond = (*stack_a)->next;
    three = (*stack_a)->next->next;

    node *smaller;
    if (first->data < seceond->data && first->data < three->data)
        smaller = first;
    else if (seceond->data < first->data && seceond->data < three->data)
         smaller = seceond;
    else
         smaller = three;
    push_b(&smaller,stack_b);
    free_stack(stack_a,smaller->data);
    sort_two(stack_a);
    push_a(stack_a,stack_b);
}
void    sort_4(node **stack_a,node **stack_b)
{
    (void)stack_b;
    node *tmp = (*stack_a);
    node *one = tmp;
    node *two = tmp->next;
    node *three = tmp->next->next;
    node *four = tmp->next->next->next;

    node *smaller;
    smaller = one;
    if (two->data < smaller->data)
    {
        smaller = two;
    }
    if (three->data < smaller->data)
    {
        smaller = three;
    }
    if (four->data < smaller->data)
    {
        smaller = four;
    }
    push_b(&smaller,stack_b);
    sort_three(stack_a,stack_b);
    free_stack(stack_a,smaller->data);
    push_a(stack_a,stack_b);
    free_stack(stack_b,smaller->data);
}
void    sort_five_or_less(node **stack_a,node **stack_b ,int ac)
{
    if (ac == 3)
    {
        sort_two(stack_a);
    }
    else if (ac == 4)
    {
        sort_three(stack_a,stack_b);
        free_stack(stack_b,(*stack_b)->data);
    }
    else if (ac == 5)
    {
        sort_4(stack_a,stack_b);
    }
}