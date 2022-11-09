/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_front.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 08:01:33 by vivan-de          #+#    #+#             */
/*   Updated: 2022/11/08 22:46:28 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_stack_add_front(t_stack **stack, t_stack *new)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp->prev)
		tmp = tmp->prev;
	new->next = tmp;
	tmp->prev = new;
	*stack = new;
}
