/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_empty_space.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 20:26:29 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/08 02:35:57 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../push_swap.h"

void    check_empty_space(int ac,char **av)
{

    int i;

    i = 1;
    if (ac > 1)
    {
        while (i < ac)
        {
            if(!av[i][0])
                ft_error();
            int j = 0;
            while (av[i][j])
            {
                if (av[i][0] == ' ' && av[i][1] == '\0')
                        ft_error();
                j++;
            }
            i++;
        }
    }
    return ;
}