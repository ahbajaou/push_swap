# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahbajaou <ahbajaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/20 23:29:05 by ahbajaou          #+#    #+#              #
#    Updated: 2023/04/09 09:26:33 by ahbajaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = push_swap.c libft_utils/*.c  utils/*.c linklist/linklist.c instructions/*.c
CFLAGS = -Wall -Wextra -Werror #-fsanitize=address -g3
cc = cc


all : push_swap

push_swap :
	$(cc) $(CFLAGS) $(SRC) -o  push_swap

clean :
	rm -f push_swap
fclean : clean
		
re : fclean all 