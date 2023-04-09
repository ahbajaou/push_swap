/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linklist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 07:50:22 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/09 08:27:31 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

node    *creat_node(int nb)
{
    node *new;

    printf("here\n");
    new = malloc(sizeof(node));
    new->data = nb;
    new->next = NULL;

    return (new);
}

void    add_font(node **list,node *new)
{
    if (new != NULL)
    {
        new->next = *list;
        *list = new;
    }
}

void    add_back(node **list,node *new)
{
    node *tmp;
    tmp = *list;
    while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = new;
}

void    print_list(node **list)
{
    node *tmp;
    tmp = *list;
    while (tmp != NULL)
    {
        printf("%d\n",tmp->data);
        tmp = tmp->next;
    }
}
void    add_arr_to_list(int *arr,int len,node *stack_a)
{
    int i;

    i = 0;
        stack_a = malloc(sizeof(t_push));
    while (i < len)
    {
        add_font(&stack_a,creat_node(arr[i]));
        // print_list(&stack_a);
        i++;
    }
}