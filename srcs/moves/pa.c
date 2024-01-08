/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:58:50 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/08 17:43:13 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_push_swap *push_swap)
{
	int	tempo;
	int	tempo2;
	int	i;

	i = 0;
	if (push_swap->stack_b.tab_B[0] == 0 && push_swap->stack_b.tab_B[1] == 0)
		return ;
	tempo2 = push_swap->stack_b.tab_B[0];
	while (i < push_swap->stack_b.size_stack_B)
	{
		push_swap->stack_b.tab_B[i] = push_swap->stack_b.tab_B[i + 1];
		i++;
	}
	i = push_swap->stack_a.size_stack_A;
	while (i >= 0)
	{
		tempo = push_swap->stack_a.tab_A[i - 1];
		push_swap->stack_a.tab_A[i] = tempo;
		i--;
	}
	push_swap->stack_a.tab_A[0] = tempo2;
	push_swap->stack_a.size_stack_A++;
	push_swap->stack_b.size_stack_B--;
	write(1, "pa\n", 3);
	return ;
}
