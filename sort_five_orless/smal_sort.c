/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smal_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 05:17:24 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/11 05:45:13 by ahbajaou         ###   ########.fr       */
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
void    sort_three(node **tack_a)
{
    
}
void    sort_five_or_less(node **stack_a,int ac)
{
    if (ac == 3)
    {
        sort_two(stack_a);
    }
    else if (ac == 4)
    {
        sort_three(stack_a);
    }
}