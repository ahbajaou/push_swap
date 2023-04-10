/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 09:16:46 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/10 15:59:25 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
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
*/

void rotate_a(node **stack_a) {
    if (*stack_a == NULL || (*stack_a)->next == NULL) {
        // If the stack is empty or has only one element, there's nothing to rotate
        return;
    }
    node *current = *stack_a;
    while (current->next != NULL) {
        current = current->next;
    }
    // Move the first element to the end
    current->next = *stack_a;
    *stack_a = (*stack_a)->next;
    current->next->next = NULL;
}

