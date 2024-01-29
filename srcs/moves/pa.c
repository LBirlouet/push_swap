/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:58:50 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/29 11:59:21 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// void	pa(t_push_swap *push_swap)
// {
// 	int	tempo;
// 	int	tempo2;
// 	int	i;

// 	i = 0;
// 	if (push_swap->stack_b.tab_b[0] == 0 && push_swap->stack_b.tab_b[1] == 0)
// 		return ;
// 	tempo2 = push_swap->stack_b.tab_b[0];
// 	while (i < push_swap->stack_b.size_stack_b)
// 	{
// 		push_swap->stack_b.tab_b[i] = push_swap->stack_b.tab_b[i + 1];
// 		i++;
// 	}
// 	i = push_swap->stack_a.size_stack_a;
// 	while (i >= 0)
// 	{
// 		tempo = push_swap->stack_a.tab_a[i - 1];
// 		push_swap->stack_a.tab_a[i] = tempo;
// 		i--;
// 	}
// 	push_swap->stack_a.tab_a[0] = tempo2;
// 	push_swap->stack_a.size_stack_a++;
// 	push_swap->stack_b.size_stack_b--;
// 	write(1, "pa\n", 3);
// 	return ;
// }

void	pa(t_push_swap *push_swap)
{
	int	tempo;
	int tempo2;
	int	i;

	i = 0;
	/*	verif si je peux pb*/
	if (push_swap->stack_b.tab_b[0] == 0 && push_swap->stack_b.tab_b[1] == 0)
		return ;
	
	/*le nb push dans b*/
	tempo2 = push_swap->stack_b.tab_b[0];
	
	/*malloc la copie de stack b*/
	push_swap->stack_b.stack_b_tempo = malloc(sizeof(int) * push_swap->stack_b.size_stack_b);
	if (!push_swap->stack_b.stack_b_tempo)
	{
		free_all(push_swap);
		msg_error_exit();
	}
//	printf("STACK_b_TEMPO = %p | SIZE = %d\n", push_swap->stack_b.stack_b_tempo, push_swap->stack_b.size_stack_b);
	
	/*faire la copie*/
	while (i < push_swap->stack_b.size_stack_b)
	{
		push_swap->stack_b.stack_b_tempo[i] = push_swap->stack_b.tab_b[i];
		i++;
	}

	/*free stack b*/
	if (push_swap->stack_b.tab_b)
	{
		free(push_swap->stack_b.tab_b);
		push_swap->stack_b.tab_b = NULL;
	}
	
	/*malloc a la bonne size stack b*/
	push_swap->stack_b.tab_b = malloc(sizeof(int) * push_swap->stack_b.size_stack_b - 1);
	if (!push_swap->stack_b.tab_b)
	{
		free(push_swap->stack_b.stack_b_tempo);
		free_all(push_swap);
		msg_error_exit();
	}
//	printf("STACK_b       = %p | SIZE = %d\n", push_swap->stack_b.tab_b, push_swap->stack_b.size_stack_b - 1);

	/*copie ce qu'il faut dans stack b*/
	i = 0;
	while (i < push_swap->stack_b.size_stack_b)
	{
		push_swap->stack_b.tab_b[i] = push_swap->stack_b.stack_b_tempo[i + 1];
		i++;
	}
	free(push_swap->stack_b.stack_b_tempo);
	push_swap->stack_b.stack_b_tempo = NULL;
	
/*	STACK b OK*/
/*	STACK A MTN*/
	/*malloc la copie de stack B*/
	if (push_swap->stack_a.size_stack_a)
	{
//		printf("MALLC B\n");
		push_swap->stack_a.stack_a_tempo = malloc(sizeof(int) * push_swap->stack_a.size_stack_a);
		if (!push_swap->stack_a.stack_a_tempo) //fonction qui free tout apres
		{
			free_all(push_swap);
			msg_error_exit();
		}
//	printf("STACK_a_TEMPO = %p | SIZE = %d\n", push_swap->stack_a.stack_a_tempo, push_swap->stack_a.size_stack_a);

	}
	/*faire la copie*/
	i = 0;
	while (i < push_swap->stack_a.size_stack_a)
	{
		push_swap->stack_a.stack_a_tempo[i] = push_swap->stack_a.tab_a[i];
		i++;
	}

	/*free stack a*/
	if (push_swap->stack_a.tab_a)
	{
		free(push_swap->stack_a.tab_a);
//		printf("probleme ? \n");
		push_swap->stack_a.tab_a = NULL;
	}
	/*malloc stack a a la bonne size*/
	push_swap->stack_a.tab_a = malloc(sizeof(int) * push_swap->stack_a.size_stack_a + 1);
	if (!push_swap->stack_a.tab_a)
	{
		free(push_swap->stack_a.stack_a_tempo);
		free_all(push_swap);
		msg_error_exit();
	}
//	printf("STACK_a       = %p | SIZE = %d\n", push_swap->stack_a.tab_a, push_swap->stack_a.size_stack_a + 1);
	/*copie ce qu'il faut dans stack A*/
	i = push_swap->stack_a.size_stack_a;
	if (i != 0)
	{
		while (i >= 0)
		{
			tempo = push_swap->stack_a.stack_a_tempo[i - 1];
			push_swap->stack_a.tab_a[i] = tempo;
			i--;
		}
	}
	push_swap->stack_a.tab_a[0] = tempo2;
	if (push_swap->stack_a.stack_a_tempo)
	{
//		printf("FREE hn ?\n");
		free(push_swap->stack_a.stack_a_tempo);
		push_swap->stack_a.stack_a_tempo = NULL;
	}
	push_swap->stack_a.size_stack_a++;
	push_swap->stack_b.size_stack_b--;
 	write (1, "pa\n", 3);

	
	return ;
}