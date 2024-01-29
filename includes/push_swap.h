/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:48:05 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/29 13:22:07 by lbirloue         ###   ########.fr       */
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
	int	*stack_a_tempo;
	int	size_stack_a;
}				t_stack_a;

typedef struct s_stack_b {
	int	*tab_b;
	int	*stack_b_tempo;
	int	size_stack_b;
}				t_stack_b;

typedef struct s_push_swap {
	int			test;
	t_stack_a	stack_a;
	t_stack_b	stack_b;
	int			argc;
	char		**argv;
}				t_push_swap;

int		main(int argc, char **argv);
void	parsing_arg(t_push_swap *push_swap, char **argv);
void	parsing_one_argv(t_push_swap *push_swap, char *argv);
void	parsing_more_argv(char **argv);
int		ft_strlen(char *str);
ssize_t	ft_conv_char_int(char *str, ssize_t ret);
int		next_nbr(char *str, int i);
void	free_tabs(t_push_swap *push_swap);
void	free_exit(t_push_swap *push_swap);
int		two_nbr_in_str(t_push_swap *push_swap, char *str, int counter, int i);
int		two_nbr_in_str_2(t_push_swap *push_swap, char *str, int counter);
int		is_nbr_or_space_or_neg(char c);
int		is_nbr(char c);
int		no_nbr_in_str(char *str);
void	msg_error_exit(void);
void	fill_stack(t_push_swap *push_swap, char **argv);
void	malloc_stack(t_push_swap *push_swap);
void	fill_zero(t_push_swap *push_swap);
void	fill_stack_one_arg(t_push_swap *push_swap, char **argv);
void	fill_stack_more_arg(t_push_swap *push_swap, char **argv);
void	parsing_stack(t_push_swap *push_swap);
void	index_stack(t_push_swap *push_swap);
int		get_position(t_push_swap *push_swap, int i);
void	order_verif(t_push_swap *push_swap);
void	sa(t_push_swap *push_swap);
void	sb(t_push_swap *push_swap);
void	ss(t_push_swap *push_swap);
void	pb(t_push_swap *push_swap);
void	pb_a(t_push_swap *push_swap);
void	pb_a2(t_push_swap *push_swap);
void	pb_b(t_push_swap *push_swap);
void	pb_b2(t_push_swap *push_swap);
void	pa(t_push_swap *push_swap);
void	pa_b(t_push_swap *push_swap);
void	pa_b2(t_push_swap *push_swap);
void	pa_a(t_push_swap *push_swap);
void	pa_a2(t_push_swap *push_swap);
void	ra(t_push_swap *push_swap);
void	rb(t_push_swap *push_swap);
void	rr(t_push_swap *push_swap);
void	rra(t_push_swap *push_swap);
void	rrb(t_push_swap *push_swap);
void	rrr(t_push_swap *push_swap);
void	simple_dispatch(t_push_swap *push_swap);
void	sort_2(t_push_swap *push_swap);
void	sort_3(t_push_swap *push_swap);
void	sort_4(t_push_swap *push_swap);
void	sort_5(t_push_swap *push_swap);
int		verif_order(t_push_swap *push_swap);
int		pos_min_in_stack_a(t_push_swap *push_swap);
int		pos_max_in_stack_a(t_push_swap *push_swap);
int		pos_min_in_stack_b(t_push_swap *push_swap);
void	ft_radix(t_push_swap *push_swap);
void	ft_radix_b(t_push_swap *push_swap, int bit_max, int i);
void	free_all(t_push_swap *push_swap);

#endif