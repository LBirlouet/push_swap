/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:48:26 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/08 18:46:51 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sb(t_push_swap *push_swap)
{
	int	tempo;

	tempo = push_swap->stack_b.tab_b[0];
	push_swap->stack_b.tab_b[0] = push_swap->stack_b.tab_b[1];
	push_swap->stack_b.tab_b[1] = tempo;
	write (1, "sb\n", 3);
	return ;
}
