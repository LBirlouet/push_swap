/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 09:49:03 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/08 17:11:11 by lbirloue         ###   ########.fr       */
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
	printf("\n");
	/*FIN VERIF*/

	
	pb(&push_swap);
	pb(&push_swap);
	pa(&push_swap);
	
	
	/*VERIF*/
	v = 0;
	while (v < push_swap.stack_a.size_stack_A)
	{
		printf("|%d|", push_swap.stack_a.tab_A[v]);
		v++;
	}
	printf("\n|%d|%d|\n", push_swap.stack_b.tab_B[0], push_swap.stack_b.tab_B[1]);
	/*FIN VERIF*/
	return (0);
}
