# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucasbirlouer <lucasbirlouer@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 17:45:56 by lbirloue          #+#    #+#              #
#    Updated: 2024/01/13 20:33:07 by lucasbirlou      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

INCLUDES		=	includes/push_swap.h

SRCS			=	srcs/main.c \
					srcs/fill_stack.c \
					srcs/parsing_stack.c \
					srcs/index_stack.c \
					srcs/utils.c \
					srcs/verify_order.c \
					srcs/parsing_arg/arg_parsing.c \
					srcs/parsing_arg/utils_parsing.c \
					srcs/moves/sa.c \
					srcs/moves/sb.c \
					srcs/moves/ss.c \
					srcs/moves/pa.c \
					srcs/moves/pb.c \
					srcs/moves/ra.c \
					srcs/moves/rb.c \
					srcs/moves/rr.c \
					srcs/moves/rra.c \
					srcs/moves/rrb.c \
					srcs/moves/rrr.c \
					srcs/error_msg.c \

FT_PRINTF		=	libftprintf.a

FT_PRINTF_PATH	=	ft_printf

OBJ_DIR			=	objets
OBJS			=	$(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

${OBJ_DIR}/%.o : %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

all : $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(NAME) : $(OBJS) ${FT_PRINTF}
	$(CC) $(OBJS) $(CFLAGS) -o ${NAME} ${FT_PRINTF}

${FT_PRINTF}:
	${MAKE} -C ${FT_PRINTF_PATH}
	mv ${FT_PRINTF_PATH}/${FT_PRINTF} .

clean:
	rm -rf $(OBJ_DIR)
	${MAKE} clean -C ${FT_PRINTF_PATH}
	${RM} ${FT_PRINTF}

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re