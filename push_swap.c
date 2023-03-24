/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:28:53 by ahbajaou          #+#    #+#             */
/*   Updated: 2023/03/22 14:58:22 by ahbajaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void ft_error(void)
{
    write(1, "Error\n", 6);
    exit(0);
}
void    check_digit(char **str)
{
    int i = 0;
    int j = 1;
    while (str[j])
    {
        i = 0;
        while (str[j][i])
        {
            if (!ft_isdigit(str[j][i]))
                ft_error();
            i++;
        }
        j++;
    }
}
int main(int ac, char **av)
{
    int cnt = 1;
    char **ptr = NULL;
    // int i = 0;
    if (ac < 2)
        ft_error();
    check_digit(av);
    while (cnt < ac)
    {
        ptr = ft_split(av[cnt],' ');
        cnt++;
        int i = 1;
        printf("%c\n",ptr[cnt][i]);
        i++;
    }
    return (0);
}