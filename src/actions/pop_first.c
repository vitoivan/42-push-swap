/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_first.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:20:30 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/23 10:50:09 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	pop_first(t_stack **stack)
{
	t_stack	*tmp;
	int		value;

	tmp = *stack;
	while (tmp->prev != NULL)
		tmp = tmp->prev;
	value = tmp->value;
	if (tmp->next)
	{
		*stack = tmp->next;
		(*stack)->prev = NULL;
	}
	else
		*stack = NULL;
	free(tmp);
	return (value);
}
