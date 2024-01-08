/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:24:25 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/08 18:47:17 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	index_stack(t_push_swap *push_swap)
{
	int	i;
	int	*tab_tempo;

	i = 0;
	tab_tempo = malloc(sizeof(int) * push_swap->stack_a.size_stack_a);
	if (!tab_tempo)
	{
		free(push_swap->stack_a.tab_a);
		free(push_swap->stack_b.tab_b);
		msg_error_exit ();
	}
	while (i < push_swap->stack_a.size_stack_a)
	{
		tab_tempo[i] = get_position(push_swap, push_swap->stack_a.tab_a[i]);
		i++;
	}
	i = 0;
	while (i < push_swap->stack_a.size_stack_a)
	{
		push_swap->stack_a.tab_a[i] = tab_tempo[i];
		i++;
	}
	free(tab_tempo);
	return ;
}

int	get_position(t_push_swap *push_swap, int tempo)
{
	int	j;
	int	ret;

	j = 0;
	ret = 1;
	while (j < push_swap->stack_a.size_stack_a)
	{
		if (tempo > push_swap->stack_a.tab_a[j])
			ret++;
		j++;
	}
	return (ret);
}
