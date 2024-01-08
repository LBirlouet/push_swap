/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 09:49:03 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/08 12:31:25 by lbirloue         ###   ########.fr       */
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
	
	/*VERIF*/
	int v = 0;
	while (v < push_swap.stack_a.size_stack_A)
	{
		printf("|%d|", push_swap.stack_a.tab_A[v]);
		v++;
	}
	printf("\n");
	/*FIN VERIF*/
	
	index_stack(&push_swap);
	
	/*VERIF*/
	v = 0;
	while (v < push_swap.stack_a.size_stack_A)
	{
		printf("|%d|", push_swap.stack_a.tab_A[v]);
		v++;
	}
	/*FIN VERIF*/
	return (0);
}
