/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 07:44:11 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/15 13:27:30 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	verif_order(t_push_swap *push_swap)
{
	int	i;

	i = 0;
	while (i < push_swap->stack_a.size_stack_a - 1)
	{
		if (push_swap->stack_a.tab_a[i] > push_swap->stack_a.tab_a[i + 1])
			return (-1);
		i++;
	}
	return (0);
}

int	pos_min_in_stack_a(t_push_swap *push_swap)
{
	int	comp;
	int	i;

	comp = INT_MAX;
	i = 0;
	while (i < push_swap->stack_a.size_stack_a)
	{
		if (comp > push_swap->stack_a.tab_a[i])
			comp = push_swap->stack_a.tab_a[i];
		i++;
	}
	i = 0;
	while (push_swap->stack_a.tab_a[i] != comp)
		i++;
	return (i);
}

int	pos_max_in_stack_a(t_push_swap *push_swap)
{
	int	comp;
	int	i;

	comp = 0;
	i = 0;
	while (i < push_swap->stack_a.size_stack_a)
	{
		if (comp < push_swap->stack_a.tab_a[i])
			comp = push_swap->stack_a.tab_a[i];
		i++;
	}
	i = 0;
	while (push_swap->stack_a.tab_a[i] != comp)
		i++;
	return (i);
}

int	pos_min_in_stack_b(t_push_swap *push_swap)
{
	int	comp;
	int	i;

	comp = INT_MAX;
	i = 0;
	while (i < push_swap->stack_b.size_stack_b)
	{
		if (comp > push_swap->stack_b.tab_b[i])
			comp = push_swap->stack_b.tab_b[i];
		i++;
	}
	i = 0;
	while (push_swap->stack_b.tab_b[i] != comp)
		i++;
	return (i);
}
