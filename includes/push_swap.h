/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasbirlouer <lucasbirlouer@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:48:05 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/13 21:43:34 by lucasbirlou      ###   ########.fr       */
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

typedef struct s_stack_a {
	int	*tab_a;
	int	size_stack_a;
}				t_stack_a;

typedef struct s_stack_b {
	int	*tab_b;
	int	size_stack_b;
}				t_stack_b;

typedef struct s_push_swap {
	int			test;
	t_stack_a	stack_a;
	t_stack_b	stack_b;
	int			argc;
	char		**argv;
}				t_push_swap;

/*main*/
int		main(int argc, char **argv);

/*arg_parsing*/
void	parsing_arg(t_push_swap *push_swap, char **argv);
void	parsing_one_argv(t_push_swap *push_swap, char *argv);
void	parsing_more_argv(char **argv);

/*utils*/
int		ft_strlen(char *str);
ssize_t	ft_conv_char_int(char *str, ssize_t ret);
int		next_nbr(char *str, int i);
void	free_tabs(t_push_swap *push_swap);
void	free_exit(t_push_swap *push_swap);

/*utils_parsing*/
int		two_nbr_in_str(t_push_swap *push_swap, char *str, int counter, int i);
int		two_nbr_in_str_2(t_push_swap *push_swap, char *str, int counter);
int		is_nbr_or_space_or_neg(char c);
int		is_nbr(char c);
int		no_nbr_in_str(char *str);

/*error_msg*/
void	msg_error_exit(void);

/*fill_stack*/
void	fill_stack(t_push_swap *push_swap, char **argv);
void	malloc_stack(t_push_swap *push_swap);
void	fill_zero(t_push_swap *push_swap);
void	fill_stack_one_arg(t_push_swap *push_swap, char **argv);
void	fill_stack_more_arg(t_push_swap *push_swap, char **argv);

/*parsing_stack*/
void	parsing_stack(t_push_swap *push_swap);

/*index_stack*/
void	index_stack(t_push_swap *push_swap);
int		get_position(t_push_swap *push_swap, int i);

/*verify_order*/
void	order_verif(t_push_swap *push_swap);

/*moves*/
void	sa(t_push_swap *push_swap);
void	sb(t_push_swap *push_swap);
void	ss(t_push_swap *push_swap);

void	pb(t_push_swap *push_swap);
void	pa(t_push_swap *push_swap);

void	ra(t_push_swap *push_swap);
void	rb(t_push_swap *push_swap);
void	rr(t_push_swap *push_swap);

void	rra(t_push_swap *push_swap);
void	rrb(t_push_swap *push_swap);
void	rrr(t_push_swap *push_swap);

#endif