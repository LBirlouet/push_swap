/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 09:54:21 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/05 11:37:22 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	parsing(int argc, char **argv)
{
	if (argc == 1)
		msg_error_exit();
	else if(argc == 2)
		parsing_one_argv(argv[1]);
	else if (argc > 2)
		parsing_more_argv(argv);
}

void	parsing_one_argv(char *argv)
{
	int i;

	i = 0;
	printf("arg == |%s|\n", argv);
	while (argv[i])
	{
		if (is_nbr_or_space_or_neg(argv[i]) == -1)
			msg_error_exit();
		i++;
	}
	i = 0;
	if (two_nbr_in_str(argv) == -1)
		msg_error_exit();
}

void	parsing_more_argv(char **argv)
{
	printf("plusieurs arg\n");
	(void)argv;
}