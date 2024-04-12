# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: umosse <umosse@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 10:15:08 by umosse            #+#    #+#              #
#    Updated: 2024/04/12 16:25:30 by umosse           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = push_swap
NAME_BONUS = checker
SRCS_PUSH_SWAP = ps_utils.c push_swap.c push.c putontop.c reverse_rotate.c rotate.c swap.c target.c under3.c calcmoves.c domove.c parsing.c memory.c
SRCS_BONUS = bonus_checker.c bonus_input.c bonus_parsing.c bonus_push.c bonus_reverse_rotate.c bonus_rotate.c bonus_swap.c ps_utils.c putontop.c target.c under3.c calcmoves.c domove.c
OBJS_PUSH_SWAP = $(SRCS_PUSH_SWAP:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)
CFLAGS = -Wall -Werror -Wextra -g3
RM = rm -f

all: push_swap

push_swap: $(OBJS_PUSH_SWAP) Libft/libft.a Printf/printf.a
	cc $(CFLAGS) -o $(NAME) $(OBJS_PUSH_SWAP) Libft/libft.a Printf/libftprintf.a

bonus: $(OBJS_BONUS) Libft/libft.a Printf/printf.a
	cc $(CFLAGS) -o $(NAME_BONUS) $(OBJS_BONUS) Libft/libft.a Printf/libftprintf.a

Libft/libft.a:
	make -C Libft

Printf/printf.a:
	make -C Printf

clean:
	$(RM) $(OBJS_PUSH_SWAP) $(OBJS_BONUS)
	cd Libft && make clean
	cd Printf && make clean

fclean : clean
	$(RM) $(NAME) $(NAME_BONUS)
	cd Libft && make fclean
	cd Printf && make fclean

re: fclean all bonus

.PHONY : all clean fclean re
