/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:36:09 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/08 18:39:30 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rr(t_push_swap *push_swap)
{
	int	tempo;
	int	i;

	i = 0;
	tempo = push_swap->stack_a.tab_A[0];
	while (i < push_swap->stack_a.size_stack_A - 1)
	{
		push_swap->stack_a.tab_A[i] = push_swap->stack_a.tab_A[i + 1];
		i++;
	}
	push_swap->stack_a.tab_A[i] = tempo;
	tempo = push_swap->stack_b.tab_B[0];
	i = 0;
	while (i < push_swap->stack_b.size_stack_B - 1)
	{
		push_swap->stack_b.tab_B[i] = push_swap->stack_b.tab_B[i + 1];
		i++;
	}
	push_swap->stack_b.tab_B[i] = tempo;
	write (1, "rr\n", 3);
	return ;
}
