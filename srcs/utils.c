/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 09:50:40 by lbirloue          #+#    #+#             */
/*   Updated: 2024/01/08 10:23:44 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

ssize_t	ft_conv_char_int(char *str, ssize_t ret)
{
	ssize_t	i;

	i = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		i += 1;
		while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		{
			ret = (ret * 10) + (str[i] - 48);
			i++;
		}
		return (ret * -1);
	}
	else
	{
		while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		{
			ret = (ret * 10) + (str[i] - 48);
			i++;
		}
	}
	return (ret);
}

int	next_nbr(char *str, int i)
{
	while (str[i] == ' ' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	return (i);
}
