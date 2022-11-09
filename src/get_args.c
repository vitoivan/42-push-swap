/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:27:28 by vivan-de          #+#    #+#             */
/*   Updated: 2022/11/09 00:51:42 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	**get_args(char **argv)
{
	int		i;
	int		str_len;
	char	**numbers;

	i = 0;
	str_len = 1;
	while (argv[str_len])
		str_len++;
	if (str_len == 2)
		return (ft_split(argv[1], ' '));
	else
	{
		numbers = (char **)malloc(sizeof(char *) * (str_len));
		while (argv[i + 1])
		{
			numbers[i] = ft_strdup(argv[i + 1]);
			i++;
		}
		return (numbers);
	}
}
