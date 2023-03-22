/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:28:53 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/03/22 02:28:13 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void ft_error(void)
{
    write(1, "Error\n", 6);
    exit(0);
}

int main(int ac, char **av)
{
    // int i = 0;
    if (ac < 2)
        ft_error();
    int cnt = 1;
    char **tmp;
    t_push *pu;

    tmp = malloc(sizeof(char *) * ac);
    tmp[ac] = NULL;
    pu = malloc(sizeof(t_push));
    int i = 0;
    while (tmp[i])
    {
        tmp[i] = av[i + 1];
        pu->push = ft_strjoin(pu->push, tmp);
        printf("%s\n", tmp);
        i++;
    }
    // free(pu->tmp);
    // printf("%s\n",pu->push);
    return (0);
}