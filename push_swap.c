/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:28:53 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/04/06 14:44:51 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

char	*ft_join(char *s1, char *s2)
{
	unsigned int	i;
	unsigned int	j;
    // int space = 1;
	char			*str;

	i = 0;
	j = 0;

	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	
	while (s2[j])
	{
		str[i] = s2[j];
		j++;
		i++;
	}

	str[i] = '\0';
	return (str);
}

void ft_error(void)
{
    write(1, "Error\n", 6);
    exit(0);
}

void	check_digit(char **str)
{
    int i = 0;
    int j = 0;
    while (str[i])
    {
        j = 0;
        while (str[i][j])
        {
            if (ft_isalpha(str[i][j]) == 1)
                ft_error();
            j++;
        }
        i++;
    }   
}
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

int main(int ac, char **av)
{
    t_push *stack;
    stack = malloc(sizeof(t_push));
    int i = 1;
    stack->i = 1;
    stack->arr = malloc(sizeof(int *) * ac);
    char *tmp = "";
    if (ac > 1)
    {
        while (i < ac)
        {
            tmp = ft_join(tmp, av[i]);
            tmp = ft_join(tmp, " ");
            i++;
        }
       int j = 0;
       int len = 0;
        stack->spl = ft_split(tmp,' ');
        check_digit(stack->spl);
        while (stack->spl[len])
            len++;
        while (j < len)
        {
            stack->arr[j] = ft_atoi(stack->spl[j]);
            j++;
        }
        int k = 0;
        while (k < len)
        {
            printf("%d\n",stack->arr[k]);
            k++;
        }
        check_double(stack->arr,len);
        free(tmp);
    }
    else
        ft_error();
}