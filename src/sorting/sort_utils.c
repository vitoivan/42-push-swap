/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:40:18 by vivan-de          #+#    #+#             */
/*   Updated: 2022/11/13 23:20:54 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	is_the_lowest(t_stack *stack, int value)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp)
	{
		if (value > tmp->value)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	get_lower_ind(t_stack *stack)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = stack;
	while (stack)
	{
		if (is_the_lowest(stack, tmp->value))
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	push_to_n_to_b(t_ctx *ctx, int ind)
{
	int	i;
	int	stack_len;

	stack_len = get_stack_len(ctx->a);
	i = ind;
	if (ind + 1 > stack_len / 2)
	{
		while (i++ < stack_len)
			rra(ctx);
		pb(ctx);
	}
	else
	{
		while (i-- > 0)
			ra(ctx);
		pb(ctx);
	}
}
