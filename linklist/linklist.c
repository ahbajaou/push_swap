/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linklist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 07:50:22 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/15 02:37:09 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

node    *creat_node(int nb)
{
    node *new;

    //printf("==>%d\n", nb);
    new = malloc(sizeof(node));
    new->data = nb;
    new->next = NULL;
    //printf("==>%d\n",new->data);
    return (new);
}

void    add_font(node **list,node *new)
{
    if ((*list) != NULL)
    {
        new->next = *list;
        *list = new;
     }
    else
        *list = new;

}

void    add_back(node *list,node *new)
{
    node *tmp;
    tmp = list;
    if (list == NULL)
    {
        list = new;
        new->next = NULL; 
    }
    else
    {
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = new;
    }
}

void    print_list(node *list)
{
    node *tmp;
    tmp = list;
    while (tmp)
    {
        printf("%d\n",tmp->data);
        tmp = tmp->next;
    }
}
void    free_stack(node **stack,int nb)
{
    node *tmp = (*stack);
    if ((*stack) != NULL)
    {
        if (tmp->data != nb)
        {
            while (tmp->next != NULL)
            {
                if (tmp->next->data == nb)
                {
                    node *del = tmp->next;
                    tmp->next = tmp->next->next;
                    free(del);
                    return ;
                }
                tmp = tmp->next;
            }
        }
        else
        {
            node *del = tmp;
            (*stack) = tmp->next;
            free(del);
        }

    }
}
int     leghtlist(node **stack)
{
    int i;

    i = 0;
    node *tmp = (*stack);
    while (tmp)
    {
        tmp = tmp->next;
        i++;
    }
    return (i);
}
node   *add_arr_to_list(int *arr,int len,node *stack_a)
{
    int i;

    i = 1;

    while (i < len)
    {

        add_back(stack_a, creat_node(arr[i]));

        i++;
    }
    // print_list(stack_a);
    return (stack_a);
}