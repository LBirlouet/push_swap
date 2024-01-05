# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 17:45:56 by lbirloue          #+#    #+#              #
#    Updated: 2024/01/05 11:29:29 by lbirloue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

INCLUDES	=	includes/push_swap.h

SRCS		=	srcs/main.c \
				srcs/utils.c \
				srcs/arg_parsing.c \
				srcs/error_msg.c \


FT_PRINTF		= libftprintf.a

FT_PRINTF_PATH	= ft_printf

OBJS = $(SRCS:.c=.o)


%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@


all : $(NAME) 
$(NAME) : $(OBJS) ${FT_PRINTF}
	$(CC) $(OBJS) $(CFLAGS) -o ${NAME} ${FT_PRINTF}


${FT_PRINTF}:
	${MAKE} -C ${FT_PRINTF_PATH}
	mv ${FT_PRINTF_PATH}/${FT_PRINTF} .


clean:
	rm -rf $(OBJS)
	${MAKE} clean -C ${FT_PRINTF_PATH}
	${RM} ${FT_PRINTF}

fclean: clean
	rm -rf $(NAME) 

re: fclean all


.PHONY:		all clean fclean re