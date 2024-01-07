/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasbirlouer <lucasbirlouer@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:48:05 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/07 12:02:45 by lucasbirlou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include "../ft_printf/ft_printf.h"
# include <stdio.h>

typedef struct s_stack_A {
	int	*tab_A;
	int size_stack_A;
}				t_stack_A;

typedef struct s_stack_B {
	int	*tab_B;
	int size_stack_B;
}				t_stack_B;

typedef struct s_push_swap {
	int			test;
	t_stack_A	stack_A;
	t_stack_B	stack_B;
}				t_push_swap;

/*main*/
int 	main(int argc, char **argv);

/*arg_parsing*/
void	parsing(int argc, char **argv);
void	parsing_one_argv(char *argv);
void	parsing_more_argv(char **argv);

/*utils*/
int	ft_strlen(char *str);

/*utils_parsing*/
int	two_nbr_in_str(char *str, int counter, int i);
int	two_nbr_in_str_2(char *str, int counter);
int is_nbr_or_space_or_neg(char c);
int	is_nbr(char c);
int	no_nbr_in_str(char *str);

/*error_msg*/
void	msg_error_exit(void);




#endif