/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:23:20 by lucasbirlou       #+#    #+#             */
/*   Updated: 2024/01/15 13:28:08 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rrb(t_push_swap *push_swap)
{
	int	tempo;
	int	size;

	size = push_swap->stack_b.size_stack_b - 1;
	tempo = push_swap->stack_b.tab_b[size];
	while (size > 0)
	{
		push_swap->stack_b.tab_b[size] = push_swap->stack_b.tab_b[size - 1];
		size--;
	}
	push_swap->stack_b.tab_b[0] = tempo;
	write (1, "rrb\n", 4);
	return ;
}
