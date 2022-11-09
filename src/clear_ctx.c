/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_ctx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:13:53 by vivan-de          #+#    #+#             */
/*   Updated: 2022/11/08 22:37:07 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	clear_ctx(t_ctx *ctx, int args_len)
{
	clear_stack(ctx->a);
	clear_stack(ctx->b);
	clear_stack(ctx->index_stack);
	clear_stack(ctx->sorted_a);
	while (args_len > 0)
	{
		if (ctx->args[args_len])
			free(ctx->args[args_len]);
		args_len--;
	}
	if (ctx->args[args_len])
		free(ctx->args[args_len]);
}
