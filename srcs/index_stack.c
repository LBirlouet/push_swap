/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 11:24:25 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/08 12:31:46 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	index_stack(t_push_swap *push_swap)
{
	int	i;
	int tab_tempo[push_swap->stack_a.size_stack_A];

	i = 0;
	while (i < push_swap->stack_a.size_stack_A)
	{
		tab_tempo[i] = get_position(push_swap, push_swap->stack_a.tab_A[i]);
		i++;
	}
	i = 0;
	while (i < push_swap->stack_a.size_stack_A)
	{
		push_swap->stack_a.tab_A[i] = tab_tempo[i];
		i++;
	}
	return ;
}

int	get_position(t_push_swap *push_swap, int tempo)
{
	int	j;
	int	ret;

	j = 0;
	ret = 1;
	while (j < push_swap->stack_a.size_stack_A)
	{
		if (tempo > push_swap->stack_a.tab_A[j])
		{
//			printf("%d > %d\n", tempo, push_swap->stack_a.tab_A[j]);
			ret++;
		}
		j++;
	}
//	printf("ret == %d\n", ret);
	return (ret);
}