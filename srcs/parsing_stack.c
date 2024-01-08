/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:45:23 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/08 18:47:17 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	parsing_stack(t_push_swap *push_swap)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	size = push_swap->stack_a.size_stack_a - 1;
	if (push_swap->stack_a.tab_a[0] == push_swap->stack_a.tab_a[size])
		free_tabs(push_swap);
	while (i <= size)
	{
		j = 1 + i;
		while (j <= size)
		{
			if (push_swap->stack_a.tab_a[i] == push_swap->stack_a.tab_a[j])
				free_tabs(push_swap);
			else
				j++;
		}
		i++;
	}
	return ;
}
