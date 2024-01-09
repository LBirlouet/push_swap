/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_order.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasbirlouer <lucasbirlouer@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:59:44 by lucasbirlou       #+#    #+#             */
/*   Updated: 2024/01/09 19:11:17 by lucasbirlou      ###   ########.fr       */
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
	printf("verif == %d || size_stack == %d\n", verif - 1, push_swap->stack_a.size_stack_a);
	if (verif - 1 == push_swap->stack_a.size_stack_a)
		exit (0);
	return ;
}
