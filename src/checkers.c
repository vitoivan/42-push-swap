/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:40:18 by vivan-de          #+#    #+#             */
/*   Updated: 2022/11/12 09:15:17 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	has_duplicates(char **args)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
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

static void	clear_splitted_list(char **list, int argc)
{
	int	i;

	i = 0;
	if (argc != 2)
		error();
	while (list[i])
	{
		if (list[i])
			free(list[i]);
		i++;
	}
	error();
}

int	check_args(char **args, int argc)
{
	int		i;
	char	**splitted;

	if (argc == 2)
	{
		if (!ft_strlen(args[1]))
			return (1);
		if (!is_a_number(args[1]) || !is_a_integer(args[1]))
			error();
		splitted = ft_split(args[1], ' ');
	}
	else
		splitted = args + 1;
	i = 0;
	while (splitted[i])
	{
		if (!is_a_number(splitted[i]) || !is_a_integer(splitted[i]))
			clear_splitted_list(splitted, argc);
		i++;
	}
	if (has_duplicates(splitted))
		clear_splitted_list(splitted, argc);
	return (0);
}
