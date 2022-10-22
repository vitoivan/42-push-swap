/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_shift.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:20:30 by vivan-de          #+#    #+#             */
/*   Updated: 2022/10/22 11:44:48 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	reverse_shift(t_stack **stack)
{
	int	value;

	if (*stack)
	{
		if ((*stack)->next)
		{
			value = pop_last(stack);
			ft_stack_add_front(stack, ft_stack_new(value));
		}
	}
}
