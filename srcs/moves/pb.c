/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:05:06 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/29 13:12:17 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pb(t_push_swap *push_swap)
{
	int	tempo2;
	int	i;

	i = 0;
	if (push_swap->stack_a.tab_a[0] == 0 && push_swap->stack_a.tab_a[1] == 0)
		return ;
	tempo2 = push_swap->stack_a.tab_a[0];
	pb_a(push_swap);
	pb_a2(push_swap);
	pb_b(push_swap);
	pb_b2(push_swap);
	push_swap->stack_b.tab_b[0] = tempo2;
	if (push_swap->stack_b.stack_b_tempo)
	{
		free(push_swap->stack_b.stack_b_tempo);
		push_swap->stack_b.stack_b_tempo = NULL;
	}
	push_swap->stack_b.size_stack_b++;
	push_swap->stack_a.size_stack_a--;
	write(1, "pb\n", 3);
	return ;
}

void	pb_a(t_push_swap *push_swap)
{
	int	i;

	i = 0;
	push_swap->stack_a.stack_a_tempo = malloc(sizeof(int)
			* push_swap->stack_a.size_stack_a);
	if (!push_swap->stack_a.stack_a_tempo)
	{
		free_all(push_swap);
		msg_error_exit();
	}
	while (i < push_swap->stack_a.size_stack_a)
	{
		push_swap->stack_a.stack_a_tempo[i] = push_swap->stack_a.tab_a[i];
		i++;
	}
	return ;
}

void	pb_a2(t_push_swap *push_swap)
{
	int	i;

	if (push_swap->stack_a.tab_a)
	{
		free(push_swap->stack_a.tab_a);
		push_swap->stack_a.tab_a = NULL;
	}
	push_swap->stack_a.tab_a = malloc(sizeof(int)
			* push_swap->stack_a.size_stack_a - 1);
	if (!push_swap->stack_a.tab_a)
	{
		free(push_swap->stack_a.stack_a_tempo);
		free_all(push_swap);
		msg_error_exit();
	}
	i = 0;
	while (i < push_swap->stack_a.size_stack_a)
	{
		push_swap->stack_a.tab_a[i] = push_swap->stack_a.stack_a_tempo[i + 1];
		i++;
	}
	free(push_swap->stack_a.stack_a_tempo);
	push_swap->stack_a.stack_a_tempo = NULL;
	return ;
}

void	pb_b(t_push_swap *push_swap)
{
	int	i;

	if (push_swap->stack_b.size_stack_b)
	{
		push_swap->stack_b.stack_b_tempo = malloc(sizeof(int)
				* push_swap->stack_b.size_stack_b);
		if (!push_swap->stack_b.stack_b_tempo)
		{
			free_all(push_swap);
			msg_error_exit();
		}
	}
	i = 0;
	while (i < push_swap->stack_b.size_stack_b)
	{
		push_swap->stack_b.stack_b_tempo[i] = push_swap->stack_b.tab_b[i];
		i++;
	}
	if (push_swap->stack_b.tab_b)
	{
		free(push_swap->stack_b.tab_b);
		push_swap->stack_b.tab_b = NULL;
	}
	return ;
}

void	pb_b2(t_push_swap *push_swap)
{
	int	tempo;
	int	i;

	push_swap->stack_b.tab_b = malloc(sizeof(int)
			* push_swap->stack_b.size_stack_b + 1);
	if (!push_swap->stack_b.tab_b)
	{
		free(push_swap->stack_b.stack_b_tempo);
		free_all(push_swap);
		msg_error_exit();
	}
	i = push_swap->stack_b.size_stack_b;
	if (i != 0)
	{
		while (i >= 0)
		{
			tempo = push_swap->stack_b.stack_b_tempo[i - 1];
			push_swap->stack_b.tab_b[i] = tempo;
			i--;
		}
	}
	return ;
}
