/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:58:50 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/08 18:47:17 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_push_swap *push_swap)
{
	int	tempo;
	int	tempo2;
	int	i;

	i = 0;
	if (push_swap->stack_b.tab_b[0] == 0 && push_swap->stack_b.tab_b[1] == 0)
		return ;
	tempo2 = push_swap->stack_b.tab_b[0];
	while (i < push_swap->stack_b.size_stack_b)
	{
		push_swap->stack_b.tab_b[i] = push_swap->stack_b.tab_b[i + 1];
		i++;
	}
	i = push_swap->stack_a.size_stack_a;
	while (i >= 0)
	{
		tempo = push_swap->stack_a.tab_a[i - 1];
		push_swap->stack_a.tab_a[i] = tempo;
		i--;
	}
	push_swap->stack_a.tab_a[0] = tempo2;
	push_swap->stack_a.size_stack_a++;
	push_swap->stack_b.size_stack_b--;
	write(1, "pa\n", 3);
	return ;
}
