/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:40:18 by vivan-de          #+#    #+#             */
/*   Updated: 2022/11/14 01:43:31 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_three(t_ctx *ctx)
{
	int	first;
	int	second;
	int	third;

	first = ctx->a->value;
	second = ctx->a->next->value;
	third = ctx->a->next->next->value;
	if (first < second && first < third && second > third)
	{
		rra(ctx);
		sa(ctx);
	}
	else if (first > second && first < third && second < third)
		sa(ctx);
	else if (first < second && first > third && second > third)
		rra(ctx);
	else if (first > second && first > third && second < third)
		ra(ctx);
	else if (first > second && first > third && second > third)
	{
		ra(ctx);
		sa(ctx);
	}
}

static void	sort_four(t_ctx *ctx)
{
	push_to_n_to_b(ctx, get_lower_ind(ctx->a));
	sort_three(ctx);
	pa(ctx);
}

static void	sort_five(t_ctx *ctx)
{
	int	fb;
	int	sb;

	push_to_n_to_b(ctx, get_lower_ind(ctx->a));
	push_to_n_to_b(ctx, get_lower_ind(ctx->a));
	sort_three(ctx);
	fb = ctx->b->value;
	sb = ctx->b->next->value;
	if (fb < sb)
		rb(ctx);
	pa(ctx);
	pa(ctx);
}

static void	sort_up_to_five(t_ctx *ctx)
{
	if (ctx->argc == 5)
		sort_five(ctx);
	else if (ctx->argc == 4)
		sort_four(ctx);
	else if (ctx->argc == 3)
		sort_three(ctx);
	else
	{
		if (ctx->a->value > ctx->a->next->value)
			sa(ctx);
	}
}

void	sort(t_ctx *ctx)
{
	generate_index_stack(ctx);
	if (is_sorted(ctx->a))
		return ;
	copy_stack(ctx->index_stack, ctx->a);
	if (ctx->argc <= 5)
		sort_up_to_five(ctx);
	else
		radix_sort(ctx, ctx->argc);
}
