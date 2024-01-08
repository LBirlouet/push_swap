/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 08:59:47 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/08 10:22:10 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	fill_stack(t_push_swap *push_swap, char **argv)
{
	if (push_swap->argc != 2)
		push_swap->stack_a.size_stack_A = push_swap->argc - 1;
	malloc_stack(push_swap);
	fill_zero(push_swap);
	if (push_swap->argc == 2)
		fill_stack_one_arg(push_swap, argv);
	else
		fill_stack_more_arg(push_swap, argv);
	return ;
}

void	malloc_stack(t_push_swap *push_swap)
{
	push_swap->stack_a.tab_A = malloc(sizeof(int)
			* push_swap->stack_a.size_stack_A);
	if (!push_swap->stack_a.tab_A)
		msg_error_exit ();
	push_swap->stack_b.tab_B = malloc(sizeof(int)
			* push_swap->stack_a.size_stack_A);
	if (!push_swap->stack_b.tab_B)
	{
		free (push_swap->stack_a.tab_A);
		msg_error_exit();
	}
	return ;
}

void	fill_zero(t_push_swap *push_swap)
{
	int	size;

	size = push_swap->stack_a.size_stack_A;
	push_swap->stack_b.size_stack_B = size;
	while (size > 0)
	{
		push_swap->stack_a.tab_A[size] = 0;
		push_swap->stack_b.tab_B[size] = 0;
		size--;
	}
}

void	fill_stack_one_arg(t_push_swap *push_swap, char **argv)
{
	int		size;
	int		i;
	int		j;
	ssize_t	conv;

	size = push_swap->stack_a.size_stack_A;
	i = 0;
	j = 0;
	while (i < size)
	{
		conv = ft_conv_char_int(&argv[1][j], 0);
		if (conv > INT_MAX || conv < INT_MIN)
			msg_error_exit();
		push_swap->stack_a.tab_A[i] = conv;
		j = next_nbr(argv[1], j);
		i++;
	}
	return ;
}

void	fill_stack_more_arg(t_push_swap *push_swap, char **argv)
{
	int		i;
	int		j;
	ssize_t	conv;

	i = 1;
	j = 0;
	while (i < push_swap->stack_a.size_stack_A + 1)
	{
		conv = ft_conv_char_int(&argv[i][j], 0);
		if (conv > INT_MAX || conv < INT_MIN)
			msg_error_exit();
		push_swap->stack_a.tab_A[i - 1] = conv;
		i++;
	}
	return ;
}
