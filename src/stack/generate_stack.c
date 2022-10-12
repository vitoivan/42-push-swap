/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:15:12 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/12 11:58:21 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_list	*generate_stack(char **argv)
{
	int		i;
	t_list	*stack;

	i = 1;
	stack = ft_lstnew(argv[i++]);
	while (argv[i])
		ft_lstadd_front(&stack, ft_lstnew(argv[i++]));
	return (stack);
}
