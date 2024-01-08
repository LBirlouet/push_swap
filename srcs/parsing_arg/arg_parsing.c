/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 09:54:21 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/08 10:23:15 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	parsing_arg(t_push_swap *push_swap, char **argv)
{
	if (push_swap->argc == 1)
		msg_error_exit();
	else if (push_swap->argc == 2)
		parsing_one_argv(push_swap, argv[1]);
	else if (push_swap->argc > 2)
		parsing_more_argv(argv);
}

void	parsing_one_argv(t_push_swap *push_swap, char *argv)
{
	int	i;

	i = 0;
	printf("arg == |%s|\n", argv);
	while (argv[i])
	{
		if (is_nbr_or_space_or_neg(argv[i]) == -1)
			msg_error_exit();
		i++;
	}
	i = 0;
	if (two_nbr_in_str(push_swap, argv, 0, 0) == -1)
		msg_error_exit();
}

void	parsing_more_argv(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j])
		{
			while (argv[i][j] == ' ')
				j++;
			if ((argv[i][j] == '-' && is_nbr(argv[i][j + 1]) == -1))
				msg_error_exit();
			if (argv[i][j] == '-')
				j++;
			while (is_nbr(argv[i][j]) == 1)
				j++;
			while (argv[i][j] == ' ')
				j++;
			if (j != (ft_strlen(argv[i])) || no_nbr_in_str(argv[i]) == -1)
				msg_error_exit();
		}
		i++;
	}
	printf("plusieurs arg\n");
}
