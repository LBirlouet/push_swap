/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:41:34 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/08 18:46:35 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(t_push_swap *push_swap)
{
	int	tempo;

	tempo = push_swap->stack_a.tab_a[0];
	push_swap->stack_a.tab_a[0] = push_swap->stack_a.tab_a[1];
	push_swap->stack_a.tab_a[1] = tempo;
	write (1, "sa\n", 3);
	return ;
}
