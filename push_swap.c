/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:28:53 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/03/22 00:53:28 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
void    ft_error(void)
{
    write(1,"Error\n",6);
}

int main(int ac,char **av)
{
    // int i = 0;
    int cnt = 1;
    t_push *pu;
    (void)av;
    pu = malloc(sizeof(t_push));
    if (ac < 2)
        ft_error();
    else
        while (cnt < ac)
        {
            while (pu->tmp)
            {
                pu->push = ft_strjoin(pu->push,pu->tmp);
                pu->tmp = av[cnt];
            }
            free(pu->tmp);
            printf("%s\n",pu->push);
            cnt++;
        }
    return (0);
}