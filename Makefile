# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 17:45:56 by lbirloue          #+#    #+#              #
#    Updated: 2024/01/29 14:22:18 by lbirloue         ###   ########.fr        #
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
					srcs/simple_sort.c \
					srcs/utils_sort.c \
					srcs/radix.c \


FT_PRINTF		=	libftprintf.a

FT_PRINTF_PATH	=	ft_printf

OBJ_DIR			=	objects

OBJS			=	$(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

${OBJ_DIR}/%.o : %.c 
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@ > /dev/null 2>&1 && printf "\e[1;32m.\e[0m" || printf "\e[1;31m\e[0m"

all : $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(NAME) : $(OBJS) ${FT_PRINTF}
	@$(CC) $(OBJS) $(CFLAGS) -o ${NAME} ${FT_PRINTF} > /dev/null 2>&1 && printf "\e[1;32m.\e[0m" || printf "\e[1;31m\e[0m"

${FT_PRINTF}:
	@${MAKE} -C ${FT_PRINTF_PATH} > /dev/null 2>&1 && printf "\e[1;32m.\e[0m" || printf "\e[1;31m\e[0m"
	@mv ${FT_PRINTF_PATH}/${FT_PRINTF} . > /dev/null 2>&1 && printf "\e[1;32m.\e[0m" || printf "\e[1;31m\e[0m"

clean:
	@rm -rf $(OBJ_DIR) > /dev/null 2>&1 && printf "\033[1;31m.\033[0m"
	@${MAKE} clean -C ${FT_PRINTF_PATH} > /dev/null 2>&1 && printf "\033[1;31m.\033[0m"
	@${RM} ${FT_PRINTF} > /dev/null 2>&1 && printf "\033[1;31m.\033[0m"

fclean: clean
	@rm -rf $(NAME) > /dev/null 2>&1 && printf "\033[1;31m.\033[0m"

re: fclean all

.PHONY: all clean fclean re