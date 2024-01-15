/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasbirlouer <lucasbirlouer@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:22:56 by lucasbirlou       #+#    #+#             */
/*   Updated: 2024/01/13 21:32:21 by lucasbirlou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rra(t_push_swap *push_swap)
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
	write (1, "rra\n", 4);
    return ;
}
