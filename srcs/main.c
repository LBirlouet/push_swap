/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 09:49:03 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/08 11:24:09 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_push_swap	push_swap;

	push_swap.argc = argc;
	parsing_arg(&push_swap, argv);
	fill_stack(&push_swap, argv);
	parsing_stack(&push_swap);
	printf("|%d|%d|%d|%d|\n", push_swap.stack_a.tab_A[0], push_swap.stack_a.tab_A[1], push_swap.stack_a.tab_A[2], push_swap.stack_a.tab_A[3]);
	index_stack(&push_swap);
	return (0);
}
