/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasbirlouer <lucasbirlouer@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:23:13 by lucasbirlou       #+#    #+#             */
/*   Updated: 2024/01/13 21:32:56 by lucasbirlou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rrr(t_push_swap *push_swap)
{
	int	tempo;
	int size;

	size = push_swap->stack_a.size_stack_a - 1;
	tempo = push_swap->stack_a.tab_a[size];
	while (size > 0)
	{
		push_swap->stack_a.tab_a[size] = push_swap->stack_a.tab_a[size - 1];
		size--;
	}
	push_swap->stack_a.tab_a[0] = tempo;
    size = push_swap->stack_b.size_stack_b - 1;
	tempo = push_swap->stack_b.tab_b[size];
	while (size > 0)
	{
		push_swap->stack_b.tab_b[size] = push_swap->stack_b.tab_b[size - 1];
		size--;
	}
	push_swap->stack_b.tab_b[0] = tempo;
	write (1, "rrr\n", 4);
    return ;
}
