/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_ctx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivan-de <vivan-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:13:53 by vivan-de          #+#    #+#             */
/*   Updated: 2022/11/09 01:20:23 by vivan-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	clear_ctx(t_ctx *ctx)
{
	clear_stack(ctx->a);
	clear_stack(ctx->b);
	clear_stack(ctx->index_stack);
	clear_stack(ctx->sorted_a);
	while (ctx->argc > 0)
	{
		if (ctx->args[ctx->argc])
			free(ctx->args[ctx->argc]);
		ctx->argc--;
	}
	if (ctx->args[ctx->argc])
		free(ctx->args[ctx->argc]);
	free(ctx->args);
}
