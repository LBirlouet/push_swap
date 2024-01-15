/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:35:48 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/15 16:33:29 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_radix(t_push_swap *push_swap)
{
	int	size;
	int	bit_max;
	int	i;

	bit_max = push_swap->stack_a.tab_a[pos_max_in_stack_a(push_swap)];
	size = push_swap->stack_a.size_stack_a;
	i = -1;
	while (++i <= bit_max)
	{
		size = push_swap->stack_a.size_stack_a;
		while (size-- && verif_order(push_swap) != 0)
		{
			if (((push_swap->stack_a.tab_a[0] >> i) & 1) == 0)
				pb(push_swap);
			else
				ra(push_swap);
		}
		ft_radix_b(push_swap, bit_max, i + 1);
	}
	while (push_swap->stack_b.size_stack_b != 0)
		pa(push_swap);
	return ;
}

void	ft_radix_b(t_push_swap *push_swap, int bit_max, int i)
{
	int	size_b;

	size_b = push_swap->stack_b.size_stack_b;
	while (size_b && i <= bit_max && verif_order(push_swap) != 0)
	{
		if (((push_swap->stack_b.tab_b[0] >> i) & 1) == 0)
			rb(push_swap);
		else
			pa(push_swap);
		size_b--;
	}
	if (verif_order(push_swap) == 0)
		while (push_swap->stack_b.size_stack_b != 0)
			pa(push_swap);
	return ;
}
