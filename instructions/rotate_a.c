/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 09:16:46 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/11 03:26:37 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


// void   rotate_a(node **stack_a)
// {
    //     if (*stack_a == NULL || (*stack_a)->next == NULL)
    //         return;
    // node *tmp;
    // tmp = (*stack_a);
    // while (tmp->next->next != NULL)
    //     tmp = tmp->next;
    // // printf("last element : %d \n", tmp->data);
    // node *last = tmp;

    // node *move = *stack_a;
    // *stack_a = (*stack_a)->next;
    // last->next = malloc(sizeof(node));
    // last->next->data = move->data;
    // last->next->next = NULL;
    // free(move);
    // return (stack_a);
    // print_list(&stack_a);
// }


void rotate_a(node **stack_a)
{
    if (*stack_a == NULL || (*stack_a)->next == NULL)
        return;
    node *tmp = *stack_a;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = (*stack_a);
    *stack_a = (*stack_a)->next;
    tmp->next->next = NULL;
}

void    swap_a(node **stack_a)
{
    if (*stack_a == NULL || (*stack_a)->next == NULL)
        return;
    int     tmp;
    node *first = (*stack_a);
    node *second = (*stack_a)->next;


    tmp = first->data;
    first->data = second->data;
    second->data = tmp;
    (*stack_a) = second;
    // printf("secen == %d\n",second->data);
    print_list((*stack_a));
} 

