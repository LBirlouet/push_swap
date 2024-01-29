/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:29:16 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/29 10:44:52 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_all(t_push_swap *push_swap)
{
	if (push_swap->stack_a.tab_a)
		free(push_swap->stack_a.tab_a);
	if (push_swap->stack_b.tab_b)
		free(push_swap->stack_b.tab_b);
	return ;
}

void	msg_error_exit(void)
{
	write (2, "Error\n", 6);
	exit (EXIT_FAILURE);
}
