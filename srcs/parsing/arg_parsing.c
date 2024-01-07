/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasbirlouer <lucasbirlouer@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 09:54:21 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/07 11:57:05 by lucasbirlou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

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
	if (two_nbr_in_str(argv, 0, 0) == -1)
		msg_error_exit();
}

void	parsing_more_argv(char **argv)
{
	int i;
	int j;

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
