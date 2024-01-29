/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:58:50 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/29 13:25:22 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_push_swap *push_swap)
{
	int	tempo2;
	int	i;

	i = 0;
	if (push_swap->stack_b.tab_b[0] == 0 && push_swap->stack_b.tab_b[1] == 0)
		return ;
	tempo2 = push_swap->stack_b.tab_b[0];
	pa_b(push_swap);
	pa_b2(push_swap);
	pa_a(push_swap);
	pa_a2(push_swap);
	push_swap->stack_a.tab_a[0] = tempo2;
	if (push_swap->stack_a.stack_a_tempo)
	{
		free(push_swap->stack_a.stack_a_tempo);
		push_swap->stack_a.stack_a_tempo = NULL;
	}
	push_swap->stack_a.size_stack_a++;
	push_swap->stack_b.size_stack_b--;
	write (1, "pa\n", 3);
	return ;
}

void	pa_b(t_push_swap *push_swap)
{
	int	i;

	i = 0;
	push_swap->stack_b.stack_b_tempo = malloc(sizeof(int)
			* push_swap->stack_b.size_stack_b);
	if (!push_swap->stack_b.stack_b_tempo)
	{
		free_all(push_swap);
		msg_error_exit();
	}
	while (i < push_swap->stack_b.size_stack_b)
	{
		push_swap->stack_b.stack_b_tempo[i] = push_swap->stack_b.tab_b[i];
		i++;
	}
	return ;
}

void	pa_b2(t_push_swap *push_swap)
{
	int	i;

	if (push_swap->stack_b.tab_b)
	{
		free(push_swap->stack_b.tab_b);
		push_swap->stack_b.tab_b = NULL;
	}
	push_swap->stack_b.tab_b = malloc(sizeof(int)
			* push_swap->stack_b.size_stack_b - 1);
	if (!push_swap->stack_b.tab_b)
	{
		free(push_swap->stack_b.stack_b_tempo);
		free_all(push_swap);
		msg_error_exit();
	}
	i = 0;
	while (i < push_swap->stack_b.size_stack_b)
	{
		push_swap->stack_b.tab_b[i] = push_swap->stack_b.stack_b_tempo[i + 1];
		i++;
	}
	free(push_swap->stack_b.stack_b_tempo);
	push_swap->stack_b.stack_b_tempo = NULL;
	return ;
}

void	pa_a(t_push_swap *push_swap)
{
	int	i;

	if (push_swap->stack_a.size_stack_a)
	{
		push_swap->stack_a.stack_a_tempo = malloc(sizeof(int)
				* push_swap->stack_a.size_stack_a);
		if (!push_swap->stack_a.stack_a_tempo)
		{
			free_all(push_swap);
			msg_error_exit();
		}
	}
	i = 0;
	while (i < push_swap->stack_a.size_stack_a)
	{
		push_swap->stack_a.stack_a_tempo[i] = push_swap->stack_a.tab_a[i];
		i++;
	}
	if (push_swap->stack_a.tab_a)
	{
		free(push_swap->stack_a.tab_a);
		push_swap->stack_a.tab_a = NULL;
	}
	return ;
}

void	pa_a2(t_push_swap *push_swap)
{
	int	i;
	int	tempo;

	push_swap->stack_a.tab_a = malloc(sizeof(int)
			* push_swap->stack_a.size_stack_a + 1);
	if (!push_swap->stack_a.tab_a)
	{
		free(push_swap->stack_a.stack_a_tempo);
		free_all(push_swap);
		msg_error_exit();
	}
	i = push_swap->stack_a.size_stack_a;
	if (i != 0)
	{
		while (i >= 0)
		{
			tempo = push_swap->stack_a.stack_a_tempo[i - 1];
			push_swap->stack_a.tab_a[i] = tempo;
			i--;
		}
	}
	return ;
}
