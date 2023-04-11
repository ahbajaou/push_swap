/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linklist.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 07:50:22 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/11 02:39:53 by ahbajaou         ###   ########.fr       */
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
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = new;
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
node   *add_arr_to_list(int *arr,int len,node *stack_a)
{
    int i;

    i = 1;

    while (i < len)
    {

        add_font(&stack_a, creat_node(arr[i]));

        i++;
    }
    // print_list(stack_a);
    return (stack_a);
}