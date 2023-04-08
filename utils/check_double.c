/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:48:40 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/07 10:48:56 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int check_char(int *str,int c,int index)
{
    int i;

    i = 0;
    while (i < index)
    {
        if (str[i] == c)
            return 0;
        i++;
    }
    return 1;
}

void    check_double(int *str,int len)
{
    int i;

    i = 0;
    while (i < len)
    {
        while (str[i] == ' ')
            i++;
        if (check_char(str,str[i],i) == 0)
            ft_error();
        i++;
    }
}