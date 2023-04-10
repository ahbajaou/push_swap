/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 09:16:46 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/09 14:59:03 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void   rotate_a(node **stack_a)
{

    node *tmp;
    tmp = (*stack_a);
    while (tmp->next->next != NULL)
        tmp = tmp->next;
    // printf("last element : %d \n", tmp->data);
    node *last = tmp;

    node *move = *stack_a;
    *stack_a = (*stack_a)->next;
    last->next = malloc(sizeof(node));
    last->next->data = move->data;
    last->next->next = NULL;
    free(move);
    // return (stack_a);
    // print_list(&stack_a);
}
