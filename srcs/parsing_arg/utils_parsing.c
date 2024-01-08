/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_parsing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:45:38 by lucasbirlou       #+#    #+#             */
/*   Updated: 2024/01/08 10:56:47 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	two_nbr_in_str(t_push_swap *push_swap, char *str, int counter, int i)
{
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '-')
		{
			if (str[i + 1] == ' ' || str[i + 1] == '\0' || str[i + 1] == '-'
				|| str[i + 1] == '0')
				return (-1);
			i++;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			while (str[i] >= '0' && str[i] <= '9')
				i++;
			counter ++;
		}
		if (str[i] == '-')
			return (-1);
		while (str[i] == ' ')
			i++;
	}
	return (two_nbr_in_str_2(push_swap, str, counter));
}

int	two_nbr_in_str_2(t_push_swap *push_swap, char *str, int counter)
{
	if (str[ft_strlen(str) - 1] == '-')
		return (-1);
	if (counter > 1)
	{
		push_swap->stack_a.size_stack_A = counter;
		return (1);
	}
	return (-1);
}

int	no_nbr_in_str(char *str)
{
	int	i;
	int	verif;

	i = 0;
	verif = 0;
	while (str[i])
	{
		if (is_nbr(str[i]) == 1)
			verif++;
		i++;
	}
	if (verif == 0)
		return (-1);
	return (0);
}

int	is_nbr_or_space_or_neg(char c)
{
	if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5'
		|| c == '6' || c == '7' || c == '8' || c == '9' || c == ' ' || c == '-')
		return (1);
	return (-1);
}

int	is_nbr(char c)
{
	if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4'
		|| c == '5' || c == '6' || c == '7' || c == '8' || c == '9')
		return (1);
	return (-1);
}
