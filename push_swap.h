/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:28:56 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/08 00:08:12 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define  PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	check_digit(char **str);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_substr(char const *s, unsigned int start, size_t len);
int     ft_atoi(const char *str);
char    **ft_split(const char *s, char c);
size_t  ft_strlen(const char *s);
int     ft_isalpha(int c);
int     ft_isdigit(int   nb);
int check_sort(int *arr,int len);
void    check_double(int *str,int len);
void	check_digit(char **str);
void    check_empty_space(int ac,char **av);
void ft_error(void);


typedef struct t_push {

    int i;
    int x;
    int *arr;
    char *str;
    char *tmp;
    char **spl;

}   t_push;
#endif