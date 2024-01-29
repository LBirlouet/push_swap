/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_order.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:59:44 by lucasbirlou       #+#    #+#             */
/*   Updated: 2024/01/25 08:17:11 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	order_verif(t_push_swap *push_swap)
{
	int	i;
	int	verif;

	i = 0;
	verif = 1;
	while (i < push_swap->stack_a.size_stack_a)
	{
		if (verif == push_swap->stack_a.tab_a[i])
			verif++;
		else
			break ;
		i++;
	}
	if (verif - 1 == push_swap->stack_a.size_stack_a)
	{
		free(push_swap->stack_a.tab_a);
		free(push_swap->stack_b.tab_b);
		exit (EXIT_FAILURE);
	}
	return ;
}
