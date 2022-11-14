/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:14:46 by vivan-de          #+#    #+#             */
/*   Updated: 2022/11/13 18:14:11 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	get_stack_len(t_stack *stack)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = stack;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
