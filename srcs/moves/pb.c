/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:05:06 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/29 10:24:20 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// void	pb(t_push_swap *push_swap)
// {
// 	int	tempo;
// 	int	tempo2;
// 	int	i;

// 	i = 0;
// 	if (push_swap->stack_a.tab_a[0] == 0 && push_swap->stack_a.tab_a[1] == 0)
// 		return ;
// 	tempo2 = push_swap->stack_a.tab_a[0];
// 	while (i < push_swap->stack_a.size_stack_a)
// 	{
// 		push_swap->stack_a.tab_a[i] = push_swap->stack_a.tab_a[i + 1];
// 		i++;
// 	}
// /*-------------------------------*/	
// 	push_swap->stack_b.size_stack_b++;
// 	i = push_swap->stack_b.size_stack_b;
	


// /*-------------------------------*/	
// 	// i = push_swap->stack_b.size_stack_b;
// 	// while (i >= 0)
// 	// {
// 	// 	tempo = push_swap->stack_b.tab_b[i - 1];
// 	// 	push_swap->stack_b.tab_b[i] = tempo;
// 	// 	i--;
// 	// }
// 	// push_swap->stack_b.tab_b[0] = tempo2;
// 	push_swap->stack_a.size_stack_a--;
// 	write (1, "pb\n", 3);
// 	return ;
// }

void	pb(t_push_swap *push_swap)
{
	int	tempo;
	int tempo2;
	int	i;

	int	*stack_a_tempo;
	int	*stack_b_tempo;

	i = 0;
	/*	verif si je peux pb*/
	if (push_swap->stack_a.tab_a[0] == 0 && push_swap->stack_a.tab_a[1] == 0)
		return ;
	
	/*le nb push dans b*/
	tempo2 = push_swap->stack_a.tab_a[0];
	
	/*malloc la copie de stack A*/
	stack_a_tempo = malloc(sizeof(int) * push_swap->stack_a.size_stack_a);
	if (!stack_a_tempo) //fonction qui free tout apres
	{
		free(push_swap->stack_a.tab_a);
		if (push_swap->stack_b.tab_b)
			free(push_swap->stack_b.tab_b);
	}
	
	/*faire la copie*/
	while (i < push_swap->stack_a.size_stack_a)
	{
		stack_a_tempo[i] = push_swap->stack_a.tab_a[i];
		i++;
	}

	/*free stack A*/
	free(push_swap->stack_a.tab_a);
	
	/*malloc a la bonne size stack A*/
	push_swap->stack_a.tab_a = malloc(sizeof(int) * push_swap->stack_a.size_stack_a - 1);
	if (!push_swap->stack_a.tab_a)
	{
		/*faire fonction qui free tout*/
		free(stack_a_tempo);
	}

	/*copie ce qu'il faut dans stack A*/
	i = 0;
	while (i < push_swap->stack_a.size_stack_a)
	{
		push_swap->stack_a.tab_a[i] = stack_a_tempo[i + 1];
		i++;
	}
	

	
/*	STACK A OK*/
/*	STACK N MTN*/
	/*malloc la copie de stack B*/
	if (push_swap->stack_b.size_stack_b)
	{
		stack_b_tempo = malloc(sizeof(int) * push_swap->stack_b.size_stack_b);
		if (!stack_b_tempo) //fonction qui free tout apres
		{
			free(push_swap->stack_a.tab_a);
			if (push_swap->stack_b.tab_b)
				free(push_swap->stack_b.tab_b);
		}
	}
	/*faire la copie*/
	i = 0;
	while (i < push_swap->stack_b.size_stack_b)
	{
		stack_b_tempo[i] = push_swap->stack_b.tab_b[i];
		i++;
	}

	/*free stack B*/
	if (push_swap->stack_b.tab_b)
		free(push_swap->stack_b.tab_b);
	/*malloc stack b a la bonne size*/
	push_swap->stack_b.tab_b = malloc(sizeof(int) * push_swap->stack_b.size_stack_b + 1);
	if (!push_swap->stack_b.tab_b)
	{
		/*faire fonction qui free tout*/
		free(stack_b_tempo);
	}
	
	/*copie ce qu'il faut dans stack A*/
	i = push_swap->stack_b.size_stack_b;
	while (i >= 0)
	{
		tempo = stack_b_tempo[i - 1];
		push_swap->stack_b.tab_b[i] = tempo;
		i--;
	}
	push_swap->stack_b.tab_b[0] = tempo2;
	
	push_swap->stack_b.size_stack_b++;
	push_swap->stack_a.size_stack_a--;

	
	return ;
}