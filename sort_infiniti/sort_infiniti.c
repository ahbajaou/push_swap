/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_infiniti.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 05:02:17 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/17 18:07:00 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
void    push_all_smallerto_b(node **stack_a,node **stack_b,t_push *ronowa, int range)
{
    int i;

    i = 0;
    while ((*stack_a))
    {
        if ((*stack_a)->data <= ronowa->arr[i])
            {
                push_b(stack_a,stack_b);
                rotate_b(stack_b);
                i++;
            }
        else if ((*stack_a)->data > ronowa->arr[i] && (*stack_a)->data <= ronowa->arr[range + i])
        {
            push_b(stack_a,stack_b);
            if ((*stack_b)->data < (*stack_b)->next->data)
                rotate_b(stack_b);
            i++;
        }
        else
            rotate_a(stack_a);
    }
}
void    sort_infiniti(node **stack_a,node **stack_b,t_push *ronowa)
{
    (void)stack_b;
    int range;
    ronowa->size = leghtlist(stack_a);
    sort_in_tab(ronowa);
    if (ronowa->size >= 6 && ronowa->size <= 16)
        range = 3;
    else if (ronowa->size >= 17 && ronowa->size <= 100)
        range = 13;
    else
        range = 35;
    push_all_smallerto_b(stack_a,stack_b,ronowa,range);
}