/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:15:12 by vivan-de          #+#    #+#             */
/*   Updated: 2022/11/06 12:47:52 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*generate_stack(char **argv)
{
	int		i;
	t_stack	*stack;
	int		content;

	i = 0;
	if (!argv[i])
		return (NULL);
	content = ft_atoi(argv[i++]);
	stack = ft_stack_new(content);
	while (argv[i])
	{
		content = ft_atoi(argv[i++]);
		ft_stack_add_back(&stack, ft_stack_new(content));
	}
	return (stack);
}
