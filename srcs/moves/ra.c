/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:04:34 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/08 18:18:05 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ra(t_push_swap *push_swap)
{
	int	tempo;
	int	i;

	i = 0;
	tempo = 0;
	tempo = push_swap->stack_a.tab_A[0];
	while (i < push_swap->stack_a.size_stack_A - 1)
	{
		push_swap->stack_a.tab_A[i] = push_swap->stack_a.tab_A[i + 1];
		i++;
	}
	push_swap->stack_a.tab_A[i] = tempo;
	write (1, "ra\n", 3);
	return ;
}
