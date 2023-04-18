/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:28:56 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/18 06:34:08 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define  PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct t_node{

    int            index;
    int            data;
    struct t_node *next;

}   t_node;

typedef struct t_push {

    int     i;
    int     x;
	int		range;
    int     bigg;
    int     size;
    int     len;
    int     *arr;
    char    *str;
    char    *tmp;
    char    **spl;

} t_push;

void    check_digit(char **str);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_substr(char const *s, unsigned int start, size_t len);
int     ft_atoi(const char *str);
char    **ft_split(const char *s, char c);
size_t  ft_strlen(const char *s);
int     ft_isalpha(int c);
int     ft_isdigit(int   nb);
int     check_sort(int *arr, int len);
void    check_double(int *str, int len);
void    check_digit(char **str);
void    check_empty_space(int ac, char **av);
t_node  *add_arr_to_list(int *arr, int len, t_node *stack_a);
void    add_back(t_node *list, t_node *new);
t_node    *creat_t_node(int nb);
void    swap_a(t_node **stack_a);
void    swap_b(t_node **stack_a);
void  push_b(t_node **stack_a, t_node **stack_b);
void  push_a(t_node **stack_a, t_node **stack_b);
void   rotate_a(t_node **stack_a);
void    free_stack(t_node **stack,int nb);
void    sort_five_or_less(t_node **stack_a, t_node **stack_b, int ac);
int   check_position(t_node **stack_a);
void    sort_infiniti(t_node **stack_a, t_node **stack_b, t_push *ronowa);
void    rotate_b(t_node **stack_b);
void	rev_rotate_b(t_node **stack_b);
void	rev_rotate_a(t_node **stack_a);
void	sort_3(t_node **stack_a);
void    sort_in_tab(t_push *stack);
int    check_biggest_element(t_node **stack_b, t_push ronowa);
int     leghtlist(t_node **stack);
void ft_error(void);

#endif