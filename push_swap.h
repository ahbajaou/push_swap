/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:28:56 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/06 02:08:55 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define  PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
// #include "libft.h"


void	check_digit(char **str);
char	*ft_join(char *s1, char *s2);



typedef struct t_push {

    int i;
    int x;
    int *arr;
    char *str;
    char *tmp;
    char **spl;

}   t_push;
#endif