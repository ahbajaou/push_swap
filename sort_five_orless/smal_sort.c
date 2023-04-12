/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smal_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 05:17:24 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/12 05:17:12 by ahbajaou         ###   ########.fr       */
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
    if (first->data < seceond->data)
        {
            if (first->data < three->data)
            {
                push_b(&(*stack_a),stack_b);
                free_stack(stack_a,first->data);
            }
            else
            {
                 push_b(&(*stack_a)->next->next,stack_b);
                  free_stack(stack_a,three->data);
            }
        }
    else
        if (seceond->data < three->data)
        {
            push_b(&(*stack_a)->next, stack_b);
                free_stack(stack_a,seceond->data);

        }
        else
        {
              push_b(&(*stack_a)->next->next,stack_b);
                 free_stack(stack_a,three->data);
        }
        sort_two(stack_a);
        push_a(&(*stack_a),&(*stack_b));
}
void    sort_4(node **stack_a,node **stack_b)
{
    
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