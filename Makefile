# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umosse <umosse@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 10:15:08 by umosse            #+#    #+#              #
#    Updated: 2024/04/05 13:04:28 by umosse           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

SRCS_PUSH_SWAP = ps_utils.c push_swap.c push.c putontop.c reverse_rotate.c rotate.c swap.c target.c under3.c calcmoves.c domove.c parsing.c
OBJS_PUSH_SWAP = $(SRCS_PUSH_SWAP:.c=.o)
CFLAGS = -Wall -Werror -Wextra -g3 -O2 -fno-builtin
RM = rm -f

all: push_swap

push_swap: $(OBJS_PUSH_SWAP) Libft/libft.a Printf/printf.a
	cc $(CFLAGS) -o push_swap $(OBJS_PUSH_SWAP) Libft/libft.a Printf/libftprintf.a

Libft/libft.a:
	make -C Libft

Printf/printf.a:
	make -C Printf

clean:
	$(RM) $(OBJS_PUSH_SWAP)
	cd Libft && make clean
	cd Printf && make clean

fclean : clean
	$(RM) push_swap
	cd Libft && make fclean
	cd Printf && make fclean

re: fclean all

.PHONY : all clean fclean re
