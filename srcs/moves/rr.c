/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:36:09 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/08 18:47:17 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rr(t_push_swap *push_swap)
{
	int	tempo;
	int	i;

	i = 0;
	tempo = push_swap->stack_a.tab_a[0];
	while (i < push_swap->stack_a.size_stack_a - 1)
	{
		push_swap->stack_a.tab_a[i] = push_swap->stack_a.tab_a[i + 1];
		i++;
	}
	push_swap->stack_a.tab_a[i] = tempo;
	tempo = push_swap->stack_b.tab_b[0];
	i = 0;
	while (i < push_swap->stack_b.size_stack_b - 1)
	{
		push_swap->stack_b.tab_b[i] = push_swap->stack_b.tab_b[i + 1];
		i++;
	}
	push_swap->stack_b.tab_b[i] = tempo;
	write (1, "rr\n", 3);
	return ;
}
