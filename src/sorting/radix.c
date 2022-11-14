/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:40:18 by vivan-de          #+#    #+#             */
/*   Updated: 2022/11/14 01:40:06 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	compare_byte(int number, int byte_to_compare)
{
	return ((number >> byte_to_compare) & 1);
}

void	copy_stack(t_stack *src, t_stack *dst)
{
	while (src)
	{
		dst->value = src->value;
		src = src->next;
		dst = dst->next;
	}
}

void static	positive_sort(t_ctx *ctx, int *i, int *k, int argc)
{
	int	j;

	j = 1;
	while (j++ <= argc)
	{
		if (!compare_byte(ctx->a->value, *i))
		{
			pb(ctx);
			(*k)++;
		}
		else
			ra(ctx);
	}
	j = 0;
	if (ctx->b != NULL)
	{
		while (j++ < *k)
			pa(ctx);
	}
}

void	generate_index_stack(t_ctx *ctx)
{
	t_gis	gis;

	gis.a = ctx->a;
	gis.tmp = ctx->sorted_a;
	while (gis.a != NULL)
	{
		gis.i = 0;
		gis.value = gis.a->value;
		while (gis.tmp != NULL)
		{
			if (gis.tmp->value == gis.value)
			{
				if (ctx->index_stack == NULL)
					ctx->index_stack = ft_stack_new(gis.i);
				else
					ft_stack_add_back(&ctx->index_stack, ft_stack_new(gis.i));
				break ;
			}
			gis.tmp = gis.tmp->next;
			gis.i++;
		}
		gis.a = gis.a->next;
		gis.tmp = ctx->sorted_a;
	}
}

void	radix_sort(t_ctx *ctx, int argc)
{
	int	bits_quantity;
	int	i;
	int	k;

	generate_index_stack(ctx);
	if (is_sorted(ctx->index_stack))
		return ;
	copy_stack(ctx->index_stack, ctx->a);
	bits_quantity = 16;
	i = 0;
	while (i < bits_quantity)
	{
		k = 0;
		if (is_sorted(ctx->a))
			return ;
		positive_sort(ctx, &i, &k, argc);
		i++;
	}
}
