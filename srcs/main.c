/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 09:49:03 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/08 18:47:17 by lbirloue         ###   ########.fr       */
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
	while (v < push_swap.stack_a.size_stack_a)
	{
		printf("|%d|", push_swap.stack_a.tab_a[v]);
		v++;
	}
	printf("\n");
	/*FIN VERIF*/
	
	index_stack(&push_swap);

	

		/*VERIF*/
	v = 0;
	while (v < push_swap.stack_a.size_stack_a)
	{
		printf("|%d|", push_swap.stack_a.tab_a[v]);
		v++;
	}
	printf("\n");
	/*FIN VERIF*/

	
	pb(&push_swap);
	pb(&push_swap);
	rr(&push_swap);
	
	/*VERIF*/
	v = 0;
	printf("A|");
	while (v < push_swap.stack_a.size_stack_a)
	{
		printf("%d|", push_swap.stack_a.tab_a[v]);
		v++;
	}
	v = 0;
	printf("\nB|");
	while (v < push_swap.stack_b.size_stack_b)
	{
		printf("%d|", push_swap.stack_b.tab_b[v]);
		v++;
	}
	/*FIN VERIF*/
	return (0);
}
