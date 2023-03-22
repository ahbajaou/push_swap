/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:28:56 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/03/22 00:52:51 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define  PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
// #include "libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1

# endif

char	*get_next_line(int fd);
int		ft_chr(char *str);
size_t	ft_len(char *s);
char	*ft_join(char *s1, char *s2);
char	*ft_sub(char *s, int start, int len);

typedef struct t_push {

    int i;
    int x;
    char *push;
    char *tmp;
    char **swap;
}   t_push;
#endif