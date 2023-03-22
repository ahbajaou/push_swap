# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/20 23:29:05 by ahbajaou          #+#    #+#              #
#    Updated: 2023/03/22 00:06:32 by ahbajaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = push_swap.c libft/libft.a get_next_line/*.c
FLAGS = -Wall -Wextra -Werror 
cc = cc


all : push_swap

push_swap :
	$(cc) $(FLAGS) $(SRC) -o push_swap

clean :
	rm -f push_swap
fclean : clean
		
re : fclean all 