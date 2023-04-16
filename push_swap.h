/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:28:56 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/15 21:12:00 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define  PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct node {

    int index;
    int data;
    struct node *next;
}   node;

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
node    *add_arr_to_list(int *arr,int len, node *stack_a);
void    add_back(node *list,node *new);
void    add_font(node **list,node *new);
void    print_list(node *list);
node    *creat_node(int nb);
void    swap_a(node **stack_a);
void    swap_b(node **stack_a);
void  push_b(node **stack_a,node **stack_b);
void  push_a(node **stack_a,node **stack_b);
void   rotate_a(node **stack_a);
void    free_stack(node **stack,int nb);
void    sort_five_or_less(node **stack_a,node **stack_b ,int ac);
int   check_position(node **stack_a);
void    rotate_b(node **stack_b);
void	rev_rotate_b(node **stack_b);
void	rev_rotate_a(node **stack_a);
int     leghtlist(node **stack);
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