/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 07:32:37 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/15 13:27:07 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	simple_dispatch(t_push_swap *push_swap)
{
	if (push_swap->stack_a.size_stack_a == 2)
		sort_2(push_swap);
	else if (push_swap->stack_a.size_stack_a == 3)
		sort_3(push_swap);
	else if (push_swap->stack_a.size_stack_a == 4)
		sort_4(push_swap);
	else if (push_swap->stack_a.size_stack_a == 5)
		sort_5(push_swap);
	return ;
}

void	sort_2(t_push_swap *push_swap)
{
	if (push_swap->stack_a.tab_a[0] > push_swap->stack_a.tab_a[1])
		sa(push_swap);
	return ;
}

void	sort_3(t_push_swap *push_swap)
{
	if (pos_min_in_stack_a(push_swap) == 0
		&& pos_max_in_stack_a(push_swap) == 1)
	{
		sa(push_swap);
		ra(push_swap);
	}
	else if (pos_min_in_stack_a(push_swap) == 2
		&& pos_max_in_stack_a(push_swap) == 0)
	{
		ra(push_swap);
		sa(push_swap);
	}
	else if (pos_min_in_stack_a(push_swap) == 2
		&& pos_max_in_stack_a(push_swap) == 1)
		rra(push_swap);
	else if (pos_max_in_stack_a(push_swap) == 2
		&& pos_min_in_stack_a(push_swap) == 1)
		sa(push_swap);
	else if (pos_max_in_stack_a(push_swap) == 0
		&& pos_min_in_stack_a(push_swap) == 1)
		ra(push_swap);
	return ;
}

void	sort_4(t_push_swap *push_swap)
{
	if (pos_min_in_stack_a(push_swap) == 3)
		rra(push_swap);
	if (pos_min_in_stack_a(push_swap) == 2)
		ra(push_swap);
	if (pos_min_in_stack_a(push_swap) == 1)
		ra(push_swap);
	if (pos_min_in_stack_a(push_swap) == 0 && verif_order(push_swap) != 0)
	{
		pb(push_swap);
		sort_3(push_swap);
		pa(push_swap);
	}
	return ;
}

void	sort_5(t_push_swap *push_swap)
{
	if (pos_min_in_stack_a(push_swap) == 3)
		rra(push_swap);
	if (pos_min_in_stack_a(push_swap) == 4)
		rra(push_swap);
	if (pos_min_in_stack_a(push_swap) == 2)
		ra(push_swap);
	if (pos_min_in_stack_a(push_swap) == 1)
		ra(push_swap);
	if (pos_min_in_stack_a(push_swap) == 0 && verif_order(push_swap) != 0)
	{
		pb(push_swap);
		sort_4(push_swap);
		pa(push_swap);
	}
	return ;
}
