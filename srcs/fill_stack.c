/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 08:59:47 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/29 09:57:03 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	fill_stack(t_push_swap *push_swap, char **argv)
{
	if (push_swap->argc != 2)
		push_swap->stack_a.size_stack_a = push_swap->argc - 1;
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
	push_swap->stack_a.tab_a = malloc(sizeof(int)
			* push_swap->stack_a.size_stack_a);
	if (!push_swap->stack_a.tab_a)
		msg_error_exit ();
	// push_swap->stack_b.tab_b = malloc(sizeof(int)
	// 		* push_swap->stack_a.size_stack_a);
	// if (!push_swap->stack_b.tab_b)
	// {
	// 	free (push_swap->stack_a.tab_a);
	// 	msg_error_exit();
	// }
	return ;
}

void	fill_zero(t_push_swap *push_swap)
{
	int	size;

	size = push_swap->stack_a.size_stack_a;
	// push_swap->stack_b.size_stack_b = size;
	while (size > 0)
	{
		push_swap->stack_a.tab_a[size] = 0;
		// push_swap->stack_b.tab_b[size] = 0;
		size--;
	}
	// push_swap->stack_b.size_stack_b = 0;
	return ;
}

void	fill_stack_one_arg(t_push_swap *push_swap, char **argv)
{
	int		size;
	int		i;
	int		j;
	ssize_t	conv;

	size = push_swap->stack_a.size_stack_a;
	i = 0;
	j = 0;
	while (i < size)
	{
		conv = ft_conv_char_int(&argv[1][j], 0);
		if (conv > INT_MAX || conv < INT_MIN)
			msg_error_exit();
		push_swap->stack_a.tab_a[i] = conv;
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
	while (i < push_swap->stack_a.size_stack_a + 1)
	{
		conv = ft_conv_char_int(&argv[i][j], 0);
		if (conv > INT_MAX || conv < INT_MIN)
			msg_error_exit();
		push_swap->stack_a.tab_a[i - 1] = conv;
		i++;
	}
	return ;
}
