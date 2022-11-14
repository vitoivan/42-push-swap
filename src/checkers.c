/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:40:18 by vivan-de          #+#    #+#             */
/*   Updated: 2022/11/13 18:14:52 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	has_duplicates(char **args)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (args[++i])
	{
		j = i + 1;
		while (args[j])
		{
			if (!ft_strcmp(args[i], args[j]))
				return (1);
			j++;
		}
	}
	return (0);
}

static int	is_a_number(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) == 1 && is_signal(str[0]))
		return (0);
	if (is_signal(str[i]))
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	is_a_integer(void *content)
{
	long	n;

	n = ft_atol(content);
	if (n > 2147483647 || n < -2147483648)
		return (0);
	return (1);
}

int	check_args(char **args)
{
	int		i;
	char	**splitted;

	splitted = args + 1;
	i = -1;
	while (splitted[++i])
	{
		if (!is_a_number(splitted[i]) || !is_a_integer(splitted[i]))
			error();
	}
	if (has_duplicates(splitted))
		error();
	return (0);
}
