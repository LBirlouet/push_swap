/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 09:49:03 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/08 10:22:41 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_push_swap	push_swap;

	push_swap.argc = argc;
	parsing_arg(&push_swap, argv);
	fill_stack(&push_swap, argv);
	ft_printf("parse ok");
	return (0);
}
