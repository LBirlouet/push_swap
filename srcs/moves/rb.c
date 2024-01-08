/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 18:24:08 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/08 18:35:34 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rb(t_push_swap *push_swap)
{
	int	tempo;
	int	i;

	i = 0;
	tempo = 0;
	tempo = push_swap->stack_b.tab_B[0];
	while (i < push_swap->stack_b.size_stack_B - 1)
	{
		push_swap->stack_b.tab_B[i] = push_swap->stack_b.tab_B[i + 1];
		i++;
	}
	push_swap->stack_b.tab_B[i] = tempo;
	write (1, "rb\n", 3);
	return ;
}
