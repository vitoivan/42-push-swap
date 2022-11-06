/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:40:18 by vivan-de          #+#    #+#             */
/*   Updated: 2022/11/06 12:53:28 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	is_signal(char ch)
{
	if (ch == '-' || ch == '+')
		return (1);
	return (0);
}

static int	has_duplicates(char **args)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (args[i])
	{
		j = i + 1;
		while (args[j])
		{
			if (!ft_strcmp(args[i], args[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	check_if_is_an_number(char *str)
{
	int	i;

	i = 0;
	if (ft_strlen(str) == 1 && is_signal(str[0]))
		return (0);
	while (str[i])
	{
		if (is_signal(str[i]))
		{
			i++;
			continue ;
		}
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	check_if_is_an_integer(void *content)
{
	long	n;

	n = ft_atol(content);
	if (n > 2147483647 || n < -2147483648)
		return (0);
	return (1);
}

void	check_args(char **args, int *args_len)
{
	int		i;
	char	**splitted;

	splitted = ft_split(args[1], ' ');
	i = 0;
	while (splitted[i])
	{
		if (!check_if_is_an_number(splitted[i])
			|| !check_if_is_an_integer(splitted[i]))
		{
			i = 0;
			while (splitted[i])
				if (splitted[i])
					free(splitted[i++]);
			error();
		}
		i++;
	}
	if (has_duplicates(splitted))
	{
		i = 0;
		while (splitted[i])
			if (splitted[i])
				free(splitted[i++]);
		error();
	}
	*args_len = i;
}
